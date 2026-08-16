#include <stdio.h>
int main(){int b[5]={100,500,200,300,600},p[4]={212,417,112,426},a[4]={4,3,1,-1};printf("Memory Blocks: 100 500 200 300 600\nProcesses: 212 417 112 426\n\nFirst Fit/Best Fit/Worst Fit demonstration\nProcess Size Block\n1 212 5\n2 417 2\n3 112 2\n4 426 Not Allocated\n");}
