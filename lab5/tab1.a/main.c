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

    printf("a:\n");
	int pomoc;
	int a=0;

	for (int i=0; i<n;i++)
	{
		  if (tab[i]%2==0)
        {
			do
			{
				pomoc=tab[a];
				a++;
			} while(tab[a]%2==0);
			for (int j=0;j<n;j++)
			{
			if (tab[j]%2!=0)
			{
				if(pomoc>tab[j])
				pomoc=tab[j];
			}
			if (tab[i]%pomoc==0)
			{
				tab[i]=pomoc;
				printf("Zamiana elementow parzystych: Tab[%d] = %d\n", i, tab[i]);
				break;
			}
			}
        }
        else
        {
        	tab[i]=3*tab[i]+1;
            printf("Zamiana elementow nieparzystych: Tab[%d] = %d\n", i, tab[i]);
		}
	}
return 0;
}
