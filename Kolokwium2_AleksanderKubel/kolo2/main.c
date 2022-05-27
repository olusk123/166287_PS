#include <stdio.h>
#include "nauczyciel.h"
#include <string.h>

bool czyPrawidlowaPensja (double pensja)
{
    if(pensja<3010)
        return false;
    return true;
}
bool czyPrawidlowePensum (int pensum)
{
    if(pensum<120 || pensum>360)
        return  false;
    return true;
}


int main(int argc, char *argv[])
{
    // 1) Poproś użytkownika o wpisanie danych nauczyciela. Zabezpiecz dane!
    // Zakładamy, że nauczyciel moze miec pensum z zakresu 120 do 360h,
    //a pensja minimalna powinna być nie mniejsza niz 3010 zl .
    //Napisz odpowiednie funkcje sprawdzające poprawność danych.
    char nazwisko[MAX_LEN-1];
    char imie[MAX_LEN-1];
    int pensum;
    double pensja;
    bool czyDyplomowany;
    printf("podaj Nazwisko: \n");
    scanf("%49[^n]",nazwisko);
    printf("podaj imie: \n");
    scanf("%49[^n]",imie);
    printf("Podaj pensum:\n");
    scanf("%u", &pensum);

    while(czyPrawidlowePensum(pensum)==false)
    {
        if(czyPrawidlowePensum(pensum)==false)
        {
            printf("zle\n");
            scanf("%u",&pensum);
        }
    }

    printf("podaj pensje:\n");
    scanf("%u",&pensja);
    while(czyPrawidlowaPensja(pensja)==false)
    {
        if(czyPrawidlowaPensja(pensja)==false)
        {
            printf("zle\n");
            scanf("%lf",&pensja);
        }
    }
    printf("podaj 1 jesli jest Dyplomowany,\n podaj 0 jesli jest Mianowany");
    scanf("%u",czyDyplomowany);
    unsigned int n;
    if((n<0) || (n>1))
       printf("zle\n");
       while(n<0 ||n>1)
    {
        printf("podaj 1 jesli jest Dyplomowany,\n podaj 0 jesli jest Mianowany");
        scanf("%u",&n);
        if((n<0) || (n>1))
            printf("zle\n");
    }
    if(n == 1)
        czyDyplomowany = true;
    else
        czyDyplomowany = false;



     // 2) Zainicjalizuj strukturę o nazwie prac1 wprowadzonymi danymi.
     Nauczyciel prac1 = makeNauczyciel(nazwisko,imie,pensum,pensja,czyDyplomowany);
     show(&prac1);

    // 3) Stwórz strukturę o nazwie prac2 kopiując obiekt prac1.
    Nauczyciel prac2 = makeNauczycielCopy(&prac1);
    show(&prac2);

    // 4) Stwórz strukturę o nazwie prac3 kopiując obiekt prac1.
    Nauczyciel prac3 = makeNauczycielCopy(&prac1);
    show(&prac3);

    // 5) Zmień nazwisko nauczyciela prac1 na Kowalski
    strcpy(prac1.nazwisko,"Kowalski");

    // 6) Zmień nazwisko nauczyciela prac2 na Nowak
    strcpy(prac2.nazwisko,"Nowak");

    // 7) Zmień nazwisko nauczyciela prac3 na Nowakowski
    strcpy(prac3.nazwisko,"Nowakowski");

    // 8) Podwyższ pensum nauczyciela prac2 o 100 godzin

    podwyzkaPensum(&prac2,100);
    // 9) Zmień czyDyplomowany nauczyciela prac3 na true
    prac3.czyDyplomowany = true;

    // 10) Podnieś pensję nauczyciela prac1 o inflację 12,3%

    podwyzka(&prac1,12.3);
    // 11) Wypisz informacje o obiektach prac1, prac2, prac3
    show(&prac1);
    show(&prac2);
    show(&prac3);

    // 12) stwórz tablicę o nazwie tab trzech Nauczcieli

    // 13) W pętli for do przechodzenia tablicy zamiast indeksów należy użyć wskaźników, a każdy operator indeksowania należy zastapić operatorem dereferencji!!
    // Przejdź tablicę i wypełnij ją nauczycielami uzywając odpowiedniej funkcji.


    // 14) W pętli for do przechodzenia tablicy zamiast indeksów należy użyć wskaźników, a każdy operator indeksowania należy zastapić operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Nauczyciel znajdujących sie w tablicy tab


}
