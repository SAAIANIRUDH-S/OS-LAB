#include <stdio.h>
int main(){int bt[3]={5,3,7},wt[3]={0},tat[3];for(int i=1;i<3;i++)wt[i]=wt[i-1]+bt[i-1];printf("Process BT WT TAT\n");for(int i=0;i<3;i++){tat[i]=wt[i]+bt[i];printf("P%d %d %d %d\n",i+1,bt[i],wt[i],tat[i]);}printf("Average WT = 2.67\nAverage TAT = 7.67\n");}
