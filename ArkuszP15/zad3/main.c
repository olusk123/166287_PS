#include <stdio.h>
#include <stdlib.h>

struct Telefon
{
    char* marka;
    float cena;
};

struct Telefon foo(struct Telefon tablica[], int n)
{
    int temp=0;
    for(int i=1; i<n; i++)
    {
        if(tablica[i].cena > tablica[temp].cena)
            temp = i;
    }
    return tablica[temp];
};

int main()
{
    struct Telefon tel1 = {"Nokia", 49.99};
    struct Telefon tel2 = {"Huawei", 99.99};
    struct Telefon tel3 = {"Ericsson", 29.00};
    struct Telefon tab[3] = {tel1, tel2, tel3};
    struct Telefon res = foo(tab, 3);
    printf("%s %0.2f\n", res.marka, res.cena);
    return 0;
}
