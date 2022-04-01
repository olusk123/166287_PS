#include<stdio.h>
#include<stdlib.h>

int main()
{
    const int N=1000;
    int tab[N];
    int n;
    printf("Podaj liczbe elementow: " );
    scanf("%d",&n);
    if (n<=0||n>N)
    {
        printf("Liczba elementow musi byc z przedzialu [1, %d\n]", N);
        return 1;
    }
    for (int i=0; i<n; i++)
    {
        tab[i]=rand()%100+1;
        printf("Tab[%d] = %d\n", i, tab[i]);
    }
    printf("b:\n");
 for (int i=0;i<n;i++)
 {
  if (tab[i]%2==0)
  {
   tab[i]=-tab[i];
   printf("Parzyste Tab[%d] = %d\n", i, tab[i]);
  }
  else
  {
   tab[i]=tab[i]*2;
   printf("Nieparzyste Tab[%d] = %d\n", i, tab[i]);
  }
 }
 printf("b\n");
 for (int i=0; i<n; i++)
 {
  if (tab[i]<0)
  {
   tab[i]=-1;
   printf("Zamiana ujemnego tab[%d] = %d\n", i, tab[i]);
  }
  else
  {
   tab[i]=1;
   printf("Zamiana dodatniego tab[%d] = %d\n", i, tab[i]);
  }
 }
return 0;
