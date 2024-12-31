/*
HW_02.[c]
CO-562-A/B
Med Amine Chahi
m.chahi@jacobs-university.de
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <getopt.h>

#define MAX_ARGS 100

void run_command(char *command[], int arg_count, int show_command) {
    if (show_command) {
        fprintf(stderr, "Executing:");
        for (int i = 0; i < arg_count; i++) {
            fprintf(stderr, " %s", command[i]);
        }
        fprintf(stderr, "\n");
    }

    pid_t pid = fork();
    if (pid < 0) {
        perror("fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        execvp(command[0], command);
        perror("exec failed");
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char *argv[]) {
    int n_flag = 0, t_flag = 0, j_flag = 1;
    int max_args = MAX_ARGS;
    int max_jobs = 1;
    char *default_command[] = {"/bin/echo", NULL};
    char *command[MAX_ARGS];
    int command_size = 1;

    int c;
    while ((c = getopt(argc, argv, "n:tj:")) != -1) {
        switch (c) {
            case 'n':
                n_flag = 1;
                max_args = atoi(optarg) + 1;         // include cmd itself
                break;
            case 't':
                t_flag = 1;
                break;
            case 'j':
                j_flag = 1;
                max_jobs = atoi(optarg);
                break;
            default:
            fprintf(stderr, "Usage: xargs [-n num] [-t] [-j jobs] [command]\n");
                return EXIT_FAILURE;
        }
    }

    // Cmd specified as part of args or default to /bin/echo
    if (optind < argc) {
        command[0] = argv[optind];
        command_size = 1;
    } else {
        command[0] = default_command[0];
    }

    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    int arg_count = 1;  // Start w/ cmd

    // Init job control
    int running_jobs = 0;

    while ((read = getline(&line, &len, stdin)) != -1) {
        line[read - 1] = '\0';                        // Remove newline char
        command[arg_count++] = strdup(line);

        if (arg_count == max_args) {
            command[arg_count] = NULL;  // Null-terminate args

            // Run the cmd
            run_command(command, arg_count, t_flag);
            running_jobs++;

            // If max_jobs running, wait for one to finish
            if (running_jobs >= max_jobs) {
                wait(NULL);
                running_jobs--;
            }

            arg_count = 1;  // Reset to only include the command
        }
    }

    // If any args are left in the buffer, execute them
    if (arg_count > 1) {
        command[arg_count] = NULL;
        run_command(command, arg_count, t_flag);
        wait(NULL);
    }

    // Wait for all left jobs to finish
    while (running_jobs > 0) {
        wait(NULL);
        running_jobs--;
    }

    free(line);
    return EXIT_SUCCESS;
}
