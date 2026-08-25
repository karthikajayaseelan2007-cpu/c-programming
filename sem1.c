/* File: mutex_semaphore.c */

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t mutex;   // binary semaphore

void* thread_function(void* arg)
{
    int id = *(int*)arg;

    for (int i = 0; i < 3; i++)
    {
        sem_wait(&mutex);   // P operation (wait)

        printf("Thread %d entering critical section\n", id);
        sleep(1);           // critical section
        printf("Thread %d leaving critical section\n", id);

        sem_post(&mutex);   // V operation (signal)
        sleep(1);
    }

    return NULL;
}

int main()
{
    pthread_t t1, t2;
    int id1 = 1, id2 = 2;

    sem_init(&mutex, 0, 1);   // initialize binary semaphore to 1

    pthread_create(&t1, NULL, thread_function, &id1);
    pthread_create(&t2, NULL, thread_function, &id2);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    sem_destroy(&mutex);

    return 0;
}

