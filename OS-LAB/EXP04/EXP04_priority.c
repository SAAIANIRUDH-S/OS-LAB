#include <stdio.h>
int main(){int bt[3]={3,5,7},pr[3]={1,2,3},wt[3]={0},tat[3];for(int i=1;i<3;i++)wt[i]=wt[i-1]+bt[i-1];printf("Priority\nProcess Priority BT WT TAT\n");for(int i=0;i<3;i++){tat[i]=wt[i]+bt[i];printf("P%d %d %d %d %d\n",i+1,pr[i],bt[i],wt[i],tat[i]);}}
