#include <stdio.h>
#include <string.h>
#include "nauczyciel.h"
Nauczyciel makeNauczyciel(const char *nazwisko, const char *imie, int pensum, double pensja, bool czyDyplomowany) {
    Nauczyciel nau;
    strcpy(nau.nazwisko,nazwisko);
    strcpy(nau.imie,imie);
    nau.pensum = pensum;
    nau.pensja = pensja;
    nau.czyDyplomowany = czyDyplomowany;
    return nau;
}

Nauczyciel makeNauczycielCopy(const Nauczyciel *naucz) {
    Nauczyciel nau;
    strcpy(nau.nazwisko,naucz->nazwisko);
    strcpy(nau.imie,naucz->imie);
    nau.pensum = naucz->pensum;
    nau.pensja = naucz->pensja;
    nau.czyDyplomowany = naucz->czyDyplomowany;
    return nau;
}

void podwyzka(Nauczyciel *naucz, float inflacja){
    double n=naucz->pensja;
    naucz->pensja+=(naucz->pensja*(inflacja/100));
    if(naucz->pensja<3010)
    {
        printf("Podano zla wartosc! Wartosc pozostala nie zmieniona.\n");
        naucz->pensja=n;
    }
}


void podwyzkaPensum(Nauczyciel *naucz, int ileGodzin) {
    int n=naucz->pensum;
    naucz->pensum+=ileGodzin;
    if(naucz->pensum<120 || naucz->pensum>360)
    {
        printf("Podano zla wartosc! Wartosc pozostala nie zmieniona.\n");
        naucz->pensum=n;
    }
}


// Wyświetla dane Nauczyciela
void show(const Nauczyciel *naucz) {

    /* Funkcja powinna wyświetlac:
    Nazwisko: Kowalski
    Imię: Jan
    Pensja: 3500 zł
    Wzrost: 2,01 m
    Stanowisko: Dyplomowany

    albo

    Nazwisko: Kowalski
    Imię: Jan
    Pensja: 3500 zł
    Wzrost: 2,01 m
    Stanowisko: Mianowany

    W zaleznosci od pola czyManager
    */
    printf("Nazwisko: %s\n",naucz->nazwisko);
    printf("Imie: %s\n",naucz->imie);
    printf("Pensja: %.2lf\n",naucz->pensja);
    printf("Pensum: %d\n", naucz->pensum);
    if(naucz->czyDyplomowany)
        printf("Stanowisko: Dyplomowany\n");
    else
        printf("Stanowisko: Mianowany\n");

}



