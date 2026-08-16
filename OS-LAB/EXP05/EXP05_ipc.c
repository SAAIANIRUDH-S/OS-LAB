#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
int main(){int fd[2]; char buf[100]; char msg[]="Hello from Child Process"; pipe(fd); if(fork()==0){close(fd[0]); write(fd[1],msg,strlen(msg)+1); close(fd[1]); return 0;} wait(NULL); close(fd[1]); read(fd[0],buf,sizeof(buf)); printf("Message received from child: %s\n",buf); close(fd[0]); return 0;}
