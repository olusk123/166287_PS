#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p, *q;
    printf("d) jest poprawne: %p\n", p =*&q);
    printf("f) jest poprawne: %p\n", p =q);
    return 0;
}
