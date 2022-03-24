#include<stdio.h>
#include<stdlib.h>
double* rezerwacja()
{
    return malloc(sizeof(double));
}
int main()
{
    double*p = rezerwacja();
    *p = 102.1212;
    printf("Wynik w bajtach: %f",*p);
    return 0;
}
