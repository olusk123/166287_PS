#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    const int N=1000;
    int prawy,lewy;
    short tab[N];
    int n;
    printf("Podaj liczbe elementow: " );
    scanf("%d",&n);
    if (n<=0||n>N)
    {
        printf("Liczba elementow musi byc z przedzialu [1, %d\n]", N);
        return 1;
    }
   short lim = 999;
   srand(time(0));
   for(short*i = tab; i < tab + n; ++i) {
        *i = rand() % lim + 1;
   }
   for(short*i = tab; i < tab + n; ++i) {
        printf("%5d ",*i);
   }
    printf("c:\n");
    int tmp;
    short j=tab+prawy;
    short *pj=&j;
     for(short *i=tab+lewy;i<tab+prawy;i++)
    {
        tmp = *i;
        *i = *pj;
        *pj = tmp;
        prawy--;
    }
return 0;
}
