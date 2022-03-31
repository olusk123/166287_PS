#include <stdio.h>
#include <stdlib.h>

int*alo(int m)
{
    int*x=malloc(n*sizeof(double));
    return*x;
}
int main()
{
    int m=10;
    printf("%p",alo(m));
    return 0;
}
