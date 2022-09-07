#include <stdio.h>
#include <stdlib.h>

void zamien (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int *x, int *y, int *z)
{
    if(*x<*y)
        zamien(x,y);
    if(*x<*z)
        zamien(x,z);
    if(*y<*z)
        zamien(y,z);

}
int main()
{
    int x,y,z;
    printf("Podaj x: ");
    scanf("%d", &x);
    printf("Podaj y: ");
    scanf("%d", &y);
    printf("Podaj z: ");
    scanf("%d", &z);
    sort(&x,&y,&z);
    printf("%d, %d, %d", x,y,z);
    return 0;
}
