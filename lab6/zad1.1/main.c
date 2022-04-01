#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);

    if(n <= 0 || n > N)
        {
            printf("Liczba elementów musi byc z przedzia³u [1, %d\n]!", N);
            return 1;
        }

    short lim = 999;
    srand(time(0));
    for(short*p = tab; p < tab + n; ++p) {
            *p = rand() % lim + 1;
    }
    for(short*p = tab; p < tab + n; ++p) {
            printf("%5d ",*p);
    }
    printf("\n");
    for(short*p = tab; p < tab + n; ++p) {
            if(*p <= 0) {
                continue;
    }
    if(*p % 2 == 1) {
        *p = 3* *p + 1;
    }else{
            do{
                *p /= 2;
            }while(*p % 2 == 0);
        }
    }
    printf("\n");
    for(short*p = tab; p < tab + n; ++p) {
            printf("%5d ",*p);
    }
    printf("\n");
    return 0;
    }
