#include <stdio.h>
#include <stdlib.h>

int ile=0;
void f();
int main()
{
    f();
    f();
    f();
    return 0;
}
void f()
{
    ile++;
    printf("Ilosc wywolan =: %d\n", ile);
}
