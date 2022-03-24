#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short lim);
void wypisz(const short tab[], int n);
void collatz(short tab[], int n);
int ileDodatnich(const short tab[], int n);
int ileUjemnych(const short tab[], int n);
int ileZerowych(const short tab[], int n);
short sumaDodatnich(const short tab[], int n);
short sumaUjemnych(const short tab[], int n);
int main(void)
{
const int N = 1000;
short tab[N];
printf("Podaj liczbe elementow: ");
int n;
scanf("%d", &n);
if (n <= 0 || n > N) {
printf("Liczba elementów musi byc z przedzia³u [1, %d\n]!", N);
return 1;
}
generuj(tab, n, 100);
wypisz(tab, n);
collatz(tab, n);
printf("\n");
wypisz(tab, n);
ileDodatnich(tab, n);
ileUjemnych(tab, n);
ileZerowych(tab, n);
sumaDodatnich(tab, n);
sumaUjemnych(tab, n);

return 0;
}

void generuj(short tab[], int n, short lim)
{
srand(time(0));
for (int j = 0; j < n; ++j) {
tab[j] = rand() % lim + 1;
}
}

void wypisz(const short tab[], int n)
{
for (int j = 0; j < n; ++j) {
printf("%5d ", tab[j]);
}
printf("\n");
}

void collatz(short tab[], int n)
{
for (int j = 0; j < n; ++j) {
if (tab[j] <= 0) {
continue;
}
if (tab[j] % 2 == 1) {
tab[j] = 3 * tab[j] + 1;
} else {
do {
tab[j] /= 2;
} while (tab[j] % 2 == 0);
}
}
}
int ileDodatnich(const short tab[], int n)
{
    int dodatnie=0;
        for(int i;tab[n]>0;i++)
        dodatnie++;
    return dodatnie;
}
int ileUjemnych(const short tab[], int n)
{
    int ujemne=0;
        for(int i;tab[n]<0;i++)
        ujemne++;
    return ujemne;
}
int ileZerowych(const short tab[], int n)
{
    int zerowe=0;
        for(int i;tab[n]==0;i++)
        zerowe++;
    return zerowe;
}
short sumaDodatnich(const short tab[], int n)
{
    int suma=0;
    for(int i;tab[n]>0;i++)
    {
        suma=suma+tab[i]
    }
}
short sumaUjemnych(const short tab[], int n)
{
    int suma=0;
    for(int i;tab[n]<0;i++)
    {
        suma=suma+tab[i]
    }
}
