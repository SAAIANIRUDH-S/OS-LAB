#include <stdio.h>
#include <unistd.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <sys/wait.h>
int main(){sem_t *s=mmap(NULL,sizeof(sem_t),PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANONYMOUS,-1,0);sem_init(s,1,1); if(fork()==0){sem_wait(s); printf("Child Process Entering Critical Section\nChild Process Leaving Critical Section\n"); sem_post(s); return 0;} sem_wait(s); printf("Parent Process Entering Critical Section\nParent Process Leaving Critical Section\n"); sem_post(s); wait(NULL); sem_destroy(s);}
