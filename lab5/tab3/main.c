#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
void generuj(short [],int,short,short);
void wypisz(short [],int);
int ileDodatnich(const short [],int );
int ileUjemnych(const short [],int);
int ileZerowych(const short [],int);
short sumaDodatnich(const short [],int);
short sumaUjemnych(const short [],int);
int dlugoscMaksymalnegoCiaguDodatnich(const short [],int);
int main()
{
    int tab[N], n , mini=-99, maxi=99;
    srand(time(NULL));
    n=rand()%N+1;
    printf("Wylosowano liczbe: %d\n", n);
    generuj(tab,n,mini,maxi);
    wypisz(tab, n);
    printf("dodatnie: %d\n", ileDodatnich(tab, n));
    printf("ujemne: %d\n", ileUjemnych(tab, n));
    printf("zerowe: %d\n", ileZerowych(tab, n));
    printf("Suma dodatnich: %d\n", sumaDodatnich(tab, n));
    printf("Suma ujemnych: %d\n", sumaUjemnych(tab, n));
    printf("Dlugosc najdluzszego ciag wartosci dodatnich: %d\n", dlugoscMaksymalnegoCiaguDodatnich(tab, n));

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
int ileDodatnich(const short tab[], int n)
{
    int ile=0;
    for(int i=0;i<n;i++)
        if(tab[i]>0)
            ile++;
    return ile;
}
int ileUjemnych(const short tab[], int n)
{
    int ile=0;
    for(int i=0;i<n;i++)
        if(tab[i]<0)
            ile++;
    return ile;
}
int ileZerowych(const short tab[], int n)
{
    int ile=0;
    for(int i=0;i<n;i++)
        if(tab[i]==0)
            ile++;
    return ile;
}
short sumaDodatnich(const short tab[], int n)
{
    short suma=0;
    for(int i=0;i<n;i++)
        if(tab[i]>0)
            suma+=tab[i];
    return suma;
}
short sumaUjemnych(const short tab[], int n)
{
    short suma=0;
    for(int i=0;i<n;i++)
        if(tab[i]<0)
            suma+=tab[i];
    return suma;
}
int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n)
{
    int dl=0, maks=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]>0)
            dl++;
        else
        {
            if(tab[i]<0)
            dl=0;
        }
    }
    return dl;
}
