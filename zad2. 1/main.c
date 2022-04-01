#include <stdio.h>
#include <stdlib.h>

void generuj(short tab[], int n, short lim)
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

int dzielnik(int n)
{
    for(int i=n-1;i>=1;i--)
    {
        if(n%i==0 && i%2!=0)
            return i;
    }
}

void collatz(short tab[], int n)
{
    for(short *i=tab;i<tab+n;i++)
    {
        if(*i%2!=0)
            *i = (3**i) + 1;
        else if(*i%2==0)
        {
            *i=dzielnik(*i);
        }
    }
}

void zmien(short tab[], int n)
{
    for(short *i=tab;i<tab+n;i++)
    {
        if(*i%2!=0)
            *i*=2;
        else
            *i*=(-1);
    }
}

void signum(short tab[], int n)
{
    for(short *i=tab;i<tab+n;i++)
    {
        if(*i>0)
            *i = 1;
        else
            *i= -1;
    }
}
void odwroc(short tab[], int lewy, int prawy)
{
    int tmp;
    for(short *p = tab+lewy; p < tab + prawy; p++)
    {
        short *j= tab + prawy;
        tmp = *p;
        *p = *j;
        *j = tmp;
        prawy--;
    }
}
int ileNieparzystych(const short tab[], int n)
{
    int ile = 0;
    for(short *i=tab;i<tab+n;i++)
    {
        if(*i%2==1)
            ile++;
    }
    return ile;
}

int ileParzystych(const short tab[], int n)
{
    int ile = 0;
    for(short *i=tab;i<tab+n;i++)
    {
        if(*i%2==0)
            ile++;
    }
    return ile;
}
int ileMaksymalnych(const short tab[], int n)
{
    int maxi = *tab;
    int ile=0;
    for(short *i=tab;i<tab+n;i++)
    {
        if(*i> maxi)
            maxi = *i;
    }
    for(short *i=tab;i<tab+n;i++)
    {
        if(*i==maxi)
            ile++;
    }
    return ile;
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
    int lewy, prawy;
    generuj(tab, n, 100);
    wypisz(tab, n);
    collatz(tab, n);
    wypisz(tab, n);
    zmien(tab, n);
    wypisz(tab, n);
    signum(tab, n);
    wypisz(tab, n);
    odwroc(tab, lewy, prawy);
    wypisz(tab, n);
    printf("Nieparzystych: %d\n", ileNieparzystych(tab, n));
    printf("Parzystych: %d\n", ileParzystych(tab, n));
    printf("Ilosc elementow maksymalnych: %d\n", ileMaksymalnych(tab, n));

    return 0;
}
