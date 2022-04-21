#include <stdio.h>
#include <stdlib.h>

int porownaj(char * nap1[], char * nap2[])
{
 int i;
 int jeden=1;
 int zero=0;
 for(i=0;(nap1[i]!=0&&nap2[i]!=0);i++)
    if(nap1[i]==nap2[i])
    return jeden;
 else
    return zero;
}
int main()
{
 char nap1[20]="napis";
 char nap2[20]="napis";
 printf("%d",porownaj(nap1,nap2));
 return 0;
}

