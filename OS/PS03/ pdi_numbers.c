/*
Med Amine Chahi
m.chahi@constructor.university
CO-562-A/B
HW03
*/

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <pthread.h>
#include <math.h>
#include <unistd.h>
#include <time.h> 

int start = 1;        // Default start value
int end = 10000;      // Default end value
int num_threads = 1;  // Default Case (Single-threaded exec)
int verbose = 0;      // Verbose mode 

					// Mutex enables Synchronized printing in verbose mode
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

						//Calculating nmbr of digits
int num_digits(int num) {
    int digits = 0;
    while (num > 0) {
        digits++;
        num /= 10;
    }
    return digits;
}

int is_pdi(int num) {
    int sum = 0;
    int original_num = num;
    int digits = num_digits(num);
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    
    return sum == original_num;
}

	// Thread fct to check nums within given range
void *pdi_search(void *arg) {
    int thread_id = *(int *)arg;
    
    		                 //Calculating range for this thread
    int range_per_thread = (end - start + 1) / num_threads;
    int thread_start = start + thread_id * range_per_thread;
    int thread_end = (thread_id == num_threads - 1) ? end : thread_start + range_per_thread - 1;
    
                              //Announcing thread start/search range
    pthread_mutex_lock(&mutex);
    if (verbose) {
        fprintf(stderr, "pdi-numbers:\nt%d\nsearching\n[%d,%d]\n", thread_id, thread_start, thread_end);
    }
    pthread_mutex_unlock(&mutex);
    
    		     //Dearching for PDI nums in the given range
    for (int i = thread_start; i <= thread_end; i++) {
        if (is_pdi(i)) {
            printf("%d\n", i);
        }
    }
    
               //Announcing thread finishing
    pthread_mutex_lock(&mutex);
    if (verbose) {
        fprintf(stderr, "pdi-numbers:\nt%d\nfinishing\n", thread_id);
    }
    pthread_mutex_unlock(&mutex);
    
    pthread_exit(NULL);
}


		//Calculating time diff in secs
double get_time_diff(struct timespec start, struct timespec end) {
    double start_sec = start.tv_sec + start.tv_nsec / 1e9;
    double end_sec = end.tv_sec + end.tv_nsec / 1e9;
    return end_sec - start_sec;
}

int main(int argc, char *argv[]) {
    int opt;
    struct timespec start_time, end_time;  // For timing

    
    while ((opt = getopt(argc, argv, "s:e:t:v")) != -1) {
        switch (opt) {
            case 's':
                start = atoi(optarg); 			 // Set start value
                break;
            case 'e':
                end = atoi(optarg);   		      // Set end value
                break;
            case 't':
                num_threads = atoi(optarg);        // Set num of threads
                break; 
            case 'v':
                verbose = 1;                    // Enable verbose mode
                break;
            default:
                fprintf(stderr, "Usage: %s [-s start] [-e end] [-t threads] [-v]\n", argv[0]);
                exit(EXIT_FAILURE);
        }
    }

    					//Checking range is valid
    if (start > end) {
        fprintf(stderr, "Error: Start of range must be less than or equal to end of range.\n");
        exit(EXIT_FAILURE);
    }

    clock_gettime(CLOCK_MONOTONIC, &start_time);      //Starting timer


    				    //Memory allocation for thread IDs
    pthread_t threads[num_threads];
    int thread_ids[num_threads];

    				//Creating threads
    for (int i = 0; i < num_threads; i++) {
        thread_ids[i] = i;
        if (pthread_create(&threads[i], NULL, pdi_search, &thread_ids[i])) {
            fprintf(stderr, "Error creating thread %d\n", i);
            exit(EXIT_FAILURE);
        }
    }

                          //Waiting for threads to finish
    for (int i = 0; i < num_threads; i++) {
        if (pthread_join(threads[i], NULL)) {
            fprintf(stderr, "Error joining thread %d\n", i);
            exit(EXIT_FAILURE);
        }
    }

    clock_gettime(CLOCK_MONOTONIC, &end_time);        //Stoping timer


    						    //Calculatinf and printing the execution time in secs
    double time_taken = get_time_diff(start_time, end_time);
    printf("Execution time: %.6f seconds\n", time_taken);
    return 0;
}

/*
A3P1 c-)
From the produced graph we can clearly observe that increasing the number of threads pushes the execution time to decrease significantly, especially when doubling the number of threads. However, we can clearly see that after increasing to a certain fixed high number of threads (± number of CPU cores), the benefit of adding more threads diminishes. On the contrary, adding more threads increases execution time; instead of decreasing it, this would be due to thread management overhead.
*/
