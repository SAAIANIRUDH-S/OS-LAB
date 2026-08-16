#include <stdio.h>
int main(){int bt[3]={5,3,7},rem[3]={5,3,7},wt[3]={0},tat[3],t=0,q=2,done;do{done=1;for(int i=0;i<3;i++)if(rem[i]){done=0;int x=rem[i]<q?rem[i]:q;t+=x;rem[i]-=x;if(!rem[i])wt[i]=t-bt[i];}}while(!done);printf("Round Robin (Quantum=2)\nProcess BT WT TAT\n");for(int i=0;i<3;i++){tat[i]=wt[i]+bt[i];printf("P%d %d %d %d\n",i+1,bt[i],wt[i],tat[i]);}}
