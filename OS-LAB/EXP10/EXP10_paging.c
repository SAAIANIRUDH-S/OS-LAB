#include <stdio.h>
int main(){int pageSize=100,numPages=4,pageTable[4]={2,5,1,7},logical=235;int p=logical/pageSize,o=logical%pageSize,f=pageTable[p],phys=f*pageSize+o;printf("Page Size: %d\nNumber of Pages: %d\nLogical Address: %d\nPage Number : %d\nOffset : %d\nFrame Number : %d\nPhysical Address : %d\n",pageSize,numPages,logical,p,o,f,phys);}
