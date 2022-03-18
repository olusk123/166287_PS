#include <stdio.h>
#include <stdlib.h>

int wskaznik(int*,int*);

int main()
{
    int a, b;
    printf("Podaj dwie liczby calkowite\n");
    scanf("%d %d", &a, &b);
    printf("%d", wskaznik(&a,&b));
    return 0;
}
int wskaznik(int *a, int *b)
{
    if(*a<*b)
        return *a;
    return *b;
}
