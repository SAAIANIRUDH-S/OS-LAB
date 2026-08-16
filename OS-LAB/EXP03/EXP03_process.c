#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){pid_t p=fork(); if(p<0){printf("Fork Failed\n"); return 1;} if(p==0){printf("CHILD PROCESS\nChild PID : %d\nParent PID : %d\n",getpid(),getppid()); exit(0);} wait(NULL); printf("PARENT PROCESS\nParent PID : %d\n",getpid()); return 0;}
