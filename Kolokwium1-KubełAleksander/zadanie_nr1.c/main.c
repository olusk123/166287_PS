#include <stdio.h>
#include <stdlib.h>
#define N 100
#include <math.h>
int main()
{
    int tab[N];
    int n;
    int dodatnie=0;
    int ujemne=0;
    int zero=0;
    int pezep=0;
    printf("podaj liczbe: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",tab[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(tab[i]>0)dodatnie++;
        else if(tab[i]<0)ujemne++;
        else zero++;
    }

    printf("dodatnie: %d\n",dodatnie);
    printf("ujemne: %d\n",ujemne);

    return 0;
}
