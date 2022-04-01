#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short mini, short maxi)
{
    srand(time(NULL));
    for(short *i=tab;i<tab+n;i++)
        *i = (rand()%(abs(maxi)+abs(mini))) + mini;
}

void wypisz(const short tab[],int n)
{
    for(short *i=tab;i<tab+n;i++)
    {
        printf("%d ", *i);
    }

    printf("\n");
}
int main()
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);
    if(n<=0 || n>N)
    {
        printf("Liczba elementow musi byc z przedzialu [1, %d\n]!", N);
        return 1;
    }
    generuj(tab, n, -99, 99);
    wypisz(tab, n);
    return 0;
}
