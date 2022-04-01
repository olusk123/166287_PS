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
    printf("e\n");
    int maxi=tab[0];
    int ile=0;
    for (int i=1;i<n;i++)
    {
    	if(maxi<tab[i])
    		maxi=tab[i];
	}
	for (int i=0;i<n;i++)
	{
		if (maxi==tab[i])
			ile++;
	}
	printf("Najwiekszy: %d, ilosc wystapienia %d ", maxi, ile);

return 0;
