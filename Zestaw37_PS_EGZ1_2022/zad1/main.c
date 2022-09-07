#include <stdio.h>
#include <stdlib.h>
double * foo(const int * a, double b)
{
    return NULL;
}

int main()
{
    const int x = 6;
    double y = 23;
    printf("%p", foo(&x,y));
    return 0;
}
