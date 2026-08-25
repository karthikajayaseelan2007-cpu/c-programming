#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

int shared = 0;
sem_t sem;

void *thread_function(void *arg)
{
    int id = *(int *)arg;

    sem_wait(&sem);

    // Critical section
    printf("Thread %d entered\n", id);
    shared++;
    printf("Shared variable = %d\n", shared);

    sem_post(&sem);

    return NULL;
}

int main()
{
    pthread_t t1, t2;
    int id1 = 1, id2 = 2;

    sem_init(&sem, 0, 1);

    pthread_create(&t1, NULL, thread_function, &id1);
    pthread_create(&t2, NULL, thread_function, &id2);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    sem_destroy(&sem);

    printf("Final value = %d\n", shared);

    return 0;
}
