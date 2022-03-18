#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pw(int);
int main()
{
    unsigned int n;
    printf("Podaj nieujemna liczbe calkowita\n");
    scanf("%d",&n);
    printf("%d",pw(n));
    return 0;
}
int pw(int n)
{
    int r;
    r=pow(2,n);
    return r;
}
