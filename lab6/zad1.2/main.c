#include<stdio.h>
#include<stdlib.h>

int main()
{
    const int N=1000;
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
   for(short*p = tab; p < tab + n; ++p) {
        *p = rand() % lim + 1;
   }
   for(short*p = tab; p < tab + n; ++p) {
        printf("%5d ",*p);
   }
    printf("b:\n");
 for (short *p = tab; p < tab+n;++p)
 {
  if (*p %2==0)
  {
   *p =- *p;
   printf("Parzysty %d\n", *p);
  }
  else
  {
   *p =*p *2;
   printf("Nieparzysty = %d\n", *p);
  }
 }
 printf("b\n");
 for (short *p = tab; p < tab+n;++p)
 {
  if (*p<0)
  {
   *p=-1;
   printf("Zamiana ujemnego %d\n", *p);
  }
  else
  {
   *p=1;
   printf("Zamiana dodatniego %d\n", *p);
  }
 }
return 0;
}
