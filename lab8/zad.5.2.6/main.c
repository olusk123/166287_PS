#include <stdio.h>
#include <stdlib.h>

void kopiujn(const char*n1,char*n2,int n)
{
    int i =0;
    while(n1[i]!=0)
        i++;
    if(i<n)
        n=i;
    printf("%d\n",n);
    i=0;
    while(n1[i]!=n1[n])
    {
        n2[i]=n1[n];
        i++;
    }
    n2[i]=0;
}
int main()
{
    char napis1[]="napisnr1";
    char napis2[100];
    kopiujn(&n1,&n2,10);
    printf("%s/n",napis1);
    printf("%s/n",napis2);
    return 0;
}
