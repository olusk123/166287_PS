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
        printf("[%d] = %d\n", i, tab[i]);
    }
    printf("d:\n");
    int parz=0;
    int nieparz=0;
	for (int i=0;i<n;i++)
	{
		if (tab[i]%2==0)
			parz++;
		else
			nieparz++;
	}
	printf("parzyste: %d, nieparzyste: %d", parz, nieparz);
return 0;
}
