#include <stdio.h>
#include <pthread.h>
void* f(void* x){printf("Thread Executing\n");return NULL;}
int main(){pthread_t a,b;pthread_create(&a,NULL,f,NULL);pthread_create(&b,NULL,f,NULL);pthread_join(a,NULL);pthread_join(b,NULL);printf("All Threads Completed\n");}
