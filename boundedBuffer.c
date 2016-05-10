

#define BBUFF_H
#define QUEUE_SIZE 10
void bbuff_init(void);
void bbuff_blocking_insert(void* item);
void* bbuff_blocking_extract(void);
_Bool bbuff_is_data_available(void);

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
sem_t tengoDatos;
sem_t tengoEspacio;
int cuentaDatos;

void* buffer[QUEUE_SIZE];

int main(){
	bbuff_init();
	bbuff_blocking_insert(5);
	bbuff_blocking_insert(6);
	bbuff_blocking_extract();
}

void bbuff_init(void) 
{
	sem_init(&tengoDatos, 0, 0);
	sem_init(&tengoEspacio, 0, QUEUE_SIZE);

	cuentaDatos = 0;
}

void bbuff_blocking_insert(void* item)
{	
	sem_wait(&tengoEspacio);
	pthread_mutex_lock(&mutex);

	buffer[cuentaDatos] = item;
	cuentaDatos++;

	pthread_mutex_unlock(&mutex);
	sem_post(&tengoDatos);

}

void* bbuff_blocking_extract(void)
{
	sem_wait(&tengoDatos);
	pthread_mutex_lock(&mutex);
	void* item = buffer[cuentaDatos-1];
	cuentaDatos--;
	pthread_mutex_unlock(&mutex);
	sem_post(&tengoEspacio);
	return item;
}

_Bool bbuff_is_data_available(void)
{
	if(cuentaDatos > 0) {
		return true;
	}
	else {
		return false;
	}
}