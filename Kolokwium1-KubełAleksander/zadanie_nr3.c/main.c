#include <stdio.h>
#include <stdlib.h>
int ile_cyfr(int n);
int main()
{
    int l;
    printf("Podaj liczbe ",l);
    scanf("%d",&l);
    printf("%d",ile_cyfr(l));
    return 0;
}

int ile_cyfr(int n)
    {
    int cyf = 0;
    if (n<0){
        n = 0 - n;
    }

    while (n > 0)
    {
        n /= 10;
        cyf++;
    }
    return cyf;
}
