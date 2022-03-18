#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pn(int,int);

int main()
{
    int n, m;
    printf("Podaj 2 liczby calkowite (jedna ma byc rozna od zera)\n");
    scanf("%d %d", &n, &m);
    printf("%lf", pn(n,m));
    return 0;
}
double pn(int n, int m)
{
    double r;
    r=pow(n,m);
    return r;
}
