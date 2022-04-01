#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, x=0;
    printf("Podaj 4 liczby: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a<0) a*=(-1);

    while(d>a*x*x+b*x+c) x++;
        printf("Wynik1 = %d \n",x);
        x=0;

    while(c>5*x*x+a*x+b) x++;
        printf("Wynik2 = %d \n",x-1);

        x=0;
    while(c>=5*x*x+a*x+b) x++;
        printf("Wynik3 = %d \n",x-1);
}
