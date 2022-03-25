#include <stdio.h>
#include <stdlib.h>

int*alokacja(int n)
{
    int*x=malloc(n*sizeof(double));
    return*x;
}
int main()
{
    int n=10;
    printf("%p",alokacja(n));
    return 0;
}
