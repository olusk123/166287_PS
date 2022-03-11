#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, wynik=1;
    printf("podaj liczbe: \n");
    scanf("%d",&n);
    if(n<=2){
        printf("z³a liczba");
        return 0;
        }
        m=n;
        if(n%2==1)
            m=n-1;
        for(int i=2;i<=m;i+=2)
        wynik*=i;
            printf("wynik mnozenia: %d",wynik);
    return 0;
}
