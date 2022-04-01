#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
void generuj(short tab[], int n,short lim, int mini, int maxi)
{
    srand(time(NULL));
    for(short *i=tab;i<tab+n;i++)
        *i = rand()%lim+1;
}

void wypisz(const short tab[],int n)
{
    for(short *i=tab;i<tab+n;i++)
    {
        printf("%d ", *i);
    }

    printf("\n");
}
int ileDodatnich(const short tab[], int n)
{
    int ile=0;
        for(short *i=tab;i<tab+n;i++)
    {
        if(*i>0)
            ile++;
    }
    return ile;
}
int ileUjemnych(const short tab[], int n)
{
    int ile=0;
        for(short *i=tab;i<tab+n;i++)
    {
        if(*i<0)
            ile++;
    }
    return ile;
}
int ileZerowych(const short tab[], int n)
{
    int ile=0;
    for(short *i=tab;i<tab+n;i++)
    {
        if(*i==0)
            ile++;
    }
    return ile;
}
short sumaDodatnich(const short tab[], int n)
{
    short suma=0;
    for(short *i=tab;i<tab+n;i++)
        if(*i>0)
            suma+=*i;
    return suma;
}
short sumaUjemnych(const short tab[], int n)
{
    short suma=0;
    for(short *i=tab;i<tab+n;i++)
        if(*i<0)
            suma+=*i;
    return suma;
}
int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n)
{
    int dl=0, maks=0;
    for(short *i=tab;i<tab+n;i++)
    {
        if(*i>0)
            dl++;
        else
        {
            if(dl>maks)
                maks=dl;
            dl=0;
        }
    }
    return maks;
}

int main()
{
    int tab[N], n , mini=-99, maxi=99;
    srand(time(NULL));
    n=rand()%N+1;
    printf("Wylosowano liczbe: %d\n", n);
    generuj(tab,n, 100,mini,maxi);
    wypisz(tab, n);
    printf("dodatnie: %d\n", ileDodatnich(tab, n));
    printf("ujemne: %d\n", ileUjemnych(tab, n));
    printf("zerowe: %d\n", ileZerowych(tab, n));
    printf("Suma dodatnich: %d\n", sumaDodatnich(tab, n));
    printf("Suma ujemnych: %d\n", sumaUjemnych(tab, n));
    printf("Dlugosc najdluzszego ciag wartosci dodatnich: %d\n", dlugoscMaksymalnegoCiaguDodatnich(tab, n));

    return 0;
}

