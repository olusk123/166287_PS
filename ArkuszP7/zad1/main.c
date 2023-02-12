#include <stdio.h>
#include <stdlib.h>
int foo(const int *a, float b)
{
    return 1;
}

int main()
{
    const int x = 10;
    float y = 3.5;
    printf("%d", foo(&x,y));
    return 0;
}
