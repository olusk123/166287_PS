#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
void generuj(short [],int,short,short);
void wypisz(short [],int);
int main()
{
    int tab[N], n , mini, maxi;
    srand(time(NULL));
    n=rand()%N+1;
    printf("Wylosowano liczbe: %d\n", n);
    printf("Podaj przedzial liczb z jakimch ma byc tablica\n");
    scanf("%d %d", &mini, &maxi);
    generuj(tab,n,mini,maxi);
    wypisz(tab,n);
    return 0;
}
void generuj(short tab[] ,int n, short mini, short maxi)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
        tab[i]=rand()%(maxi-mini+1)+mini;
}
void wypisz(short tab[], int n)
{
    printf("===========\n");
    for(int i=0;i<n;i++)
        printf("%d\n", tab[i]);
}
