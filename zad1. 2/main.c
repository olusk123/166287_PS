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
     for(short *i=tab;i<tab+n;i++)
    {
        *i=rand()%100+1;
        printf("%d\n", *i);
    }
    printf("b:\n");
  for(short *i=tab;i<tab+n;i++)
 {
  if (*i%2==0)
  {
   *i=-*i;
   printf("Parzyste %d\n",*i);
  }
  else
  {
   *i=*i*2;
   printf("Nieparzyste %d\n",*i);
  }
 }
 printf("b\n");
  for(short *i=tab;i<tab+n;i++)
 {
  if (*i<0)
  {
   *i=-1;
   printf("Zamiana ujemnego %d\n", *i);
  }
  else
  {
   *i=1;
   printf("Zamiana dodatniego %d\n", *i);
  }
 }
return 0;
}
