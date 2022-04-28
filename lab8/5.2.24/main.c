#include <stdio.h>
#include <stdlib.h>

void kopiujn(const char*,char*,int);

int main()
{
    char napis1[]="kopiowanynapis", napis2[100];
    kopiujn(&napis1, &napis2, 12);
    printf("%s\n",napis1);
    printf("%s",napis2);
    return 0;
}
void kopiujn(const char *n1, char *n2,int n)
{
    int i=0;
    while(n1[i]!=0)
        i++;
    if(i<n)
        n=i;
    printf("%d\n", n);
    i=0;
    while(n1[i]!=n1[n])
    {
        n2[i]=n1[i];
        i++;
    }
    n2[i]=0;
}
