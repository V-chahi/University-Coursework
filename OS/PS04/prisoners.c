/*
 *Med Amine Chahi
 *m.chahi@constructor.university
 *CO-562-A/B
 *PS_04
 */

#include <stdio.h>
#include <unistd.h>
#include <regex.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <string.h>

#define _POSIX_C_SOURCE 200809L


int PRISONERS = 100, SEED = 0;


typedef struct PRISONER
{
    unsigned int number;
    unsigned int state;
} prisoner_t;

typedef struct PRISON
{
    unsigned int count;
    unsigned int state;
    prisoner_t prisoner;
    pthread_mutex_t mutex;
} prison_t;

typedef struct DRAWER
{
    unsigned int num;
    pthread_mutex_t mutex;
} drawer_t;


static drawer_t *drawer;


// Subroutine   -- catch& report errors. 

static void mutex_lock(pthread_mutex_t *mutex)
{
    int rc = pthread_mutex_lock(mutex);
    if (rc)
    {
        fprintf(stderr, "pthread_mutex_lock(): %s\n", strerror(rc));
        exit(EXIT_FAILURE);
    }
}

static void mutex_unlock(pthread_mutex_t *mutex)
{
    int rc = pthread_mutex_unlock(mutex);
    if (rc)
    {
        fprintf(stderr, "pthread_mutex_unlock(): %s\n", strerror(rc));
        exit(EXIT_FAILURE);
    }
}


//Implementing Four Methods

static void *random_global(void *arg)
{
    prison_t *prison = (prison_t *)arg;

    for (int i = 0; i < 50; i++)
    {
        if (drawer[i].num == prison->prisoner.number)
        {
            prison->prisoner.state = 1;
            return 0;
        }
    }
    return NULL;
}

static void *random_drawer(void *arg)
{
    prison_t *prison = (prison_t *)arg;

    for (int i = 0; i < 50; i++)
    {
        mutex_lock(&drawer[prison->prisoner.number].mutex);
        if (drawer[prison->prisoner.number].num == prison->prisoner.number)
        {
            prison->prisoner.state = 1;
            return 0;
        }
        mutex_unlock(&drawer[prison->prisoner.number].mutex);
    }

    return NULL;
}

static void *strategy_global(void *arg)
{
    prison_t *prison = (prison_t *)arg;

    for (int i = 0; i < 50; i++)
    {
        if (drawer[prison->prisoner.number].num == prison->prisoner.number)
        {
            prison->prisoner.state = 1;
            return 0;
        }
        else
        {
            prison->prisoner.number = drawer[prison->prisoner.number].num;
        }
    }
    return NULL;
}

static void *strategy_drawer(void *arg)
{
    prison_t *prison = (prison_t *)arg;

    for (int i = 0; i < 50; i++)
    {
        mutex_lock(&drawer[prison->prisoner.number].mutex);
        if (drawer[prison->prisoner.number].num == prison->prisoner.number)
        {
            prison->prisoner.state = 1;
            return 0;
        }
        else
        {
            prison->prisoner.number = drawer[prison->prisoner.number].num;
        }
        mutex_unlock(&drawer[prison->prisoner.number].mutex);
    }

    return NULL;
}


   // fct creating a thread for each prisoner using pthread_create
void run_threads(int n, void *(*proc)(void *))
{

    int rc;
    pthread_t tids[PRISONERS];
    prison_t prison = {.count = 0, .state = 0, .prisoner = {.number = 0, .state = 0}, .mutex = PTHREAD_MUTEX_INITIALIZER};

    for (unsigned int i = 0; i < PRISONERS; i++)
    {

        prison.count++;
        prison.state = 0;
        prison.prisoner.number = i;
        prison.prisoner.state = 0;
        rc = pthread_create(&tids[i], NULL, proc, &prison);
        if (rc)
        {
            fprintf(stderr, "pthread_create(): %s\n", strerror(rc));
        }
    }

    for (unsigned int i = 0; i < PRISONERS; i++)
    {
        if (tids[i])
        {
            rc = pthread_join(tids[i], NULL);
            if (rc)
            {
                fprintf(stderr, "pthread_join(): %s\n", strerror(rc));
            }
        }
    }
}

// fct capturing exec time for each method, in milliseconds.
static double timeit(int n, void *(*proc)(void *))
{
    clock_t t1, t2;
    t1 = clock();
    run_threads(n, proc);
    t2 = clock();
    return ((double)t2 - (double)t1) / CLOCKS_PER_SEC * 1000;
}


/* 
 arrange N elements of ARRAY in random order.
 Only effective if N is much smaller than RAND_MAX.
 */

static void shuffle(void *array, size_t n, size_t size)
{
    char tmp[size];
    char *arr = (char *)array;
    size_t stride = size * sizeof(char);

    if (n > 1)
    {
        size_t i;
        for (i = 0; i < n - 1; ++i)
        {
            size_t rnd = (size_t)rand();
            size_t j = i + rnd / (RAND_MAX / (n - i) + 1);

            memcpy(tmp, arr + j * stride, size);
            memcpy(arr + j * stride, arr + i * stride, size);
            memcpy(arr + i * stride, tmp, size);
        }
    }
}

void updateSeed(char *nSEED)
{
    int temp = atoi(nSEED);
    SEED = temp;
    srand(temp);
}

void updatePrisoners(char *nPrisoners)
{
    int temp = atoi(nPrisoners);
    PRISONERS = temp;
}

int main(int argc, char **argv, char **envp)
{

    int opt;
    int options_count = 1;
    regex_t regex;
    int pattern_value;

    // Compile regular expression 

    pattern_value = regcomp(&regex, "[0-9]$", 0);
    if (pattern_value)
    {
        fprintf(stderr, "Could not compile regex\n");
        exit(1);
    };

    // string's 1st char should be ':', so program can
    // distinguish between '?' and ':'

    while ((opt = getopt(argc, argv, ":n:s:")) != -1)
    {
        switch (opt)
        {
        case 'n':
            options_count++;
            if (optarg && !(regexec(&regex, optarg, 0, NULL, 0)))
            {
                updatePrisoners(optarg);
                options_count++;
            }
            break;
        case 's':
            options_count++;
            if (optarg && !(regexec(&regex, optarg, 0, NULL, 0)))
            {
                updateSeed(optarg);
                options_count++;
            }
            break;
        }
    }

    if (SEED == 0)
    {
        srand(time(0));
    }
    else
    {
        srand(SEED);
    }

    drawer = (drawer_t *)malloc(sizeof(drawer_t) * PRISONERS);

    for (unsigned int i = 0; i < PRISONERS; i++)
    {
        drawer[i].num = i;
        pthread_mutex_init(&drawer[i].mutex, NULL);
    }

    shuffle(drawer, PRISONERS, sizeof(drawer_t));

    printf("method random_global %lf", timeit(PRISONERS, random_global));
    printf("method random_drawer %lf", timeit(PRISONERS, random_drawer));
    printf("method strategy_global %lf", timeit(PRISONERS, strategy_global));
    printf("method strategy_drawer %lf", timeit(PRISONERS, strategy_drawer));

    free(drawer);
    regfree(&regex);
    return 0;
}