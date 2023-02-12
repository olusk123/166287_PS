#include <stdio.h>
#include <stdlib.h>

int fun(int tab[3][3], char *n)
{
    return 1;
}
int main()
{
    int tab[3][3]={{1,2,3}, {3,2,1}, {4,5,6}};
    char *a = "123";
    printf("%d", fun(tab, a));
    return 0;
}
