#include <stdio.h>
#include <string.h>
#include "nauczyciel.h"
Nauczyciel makeNauczyciel(const char *nazwisko, const char *imie, int pensum, double pensja, bool czyDyplomowany) {
}

Nauczyciel makeNauczycielCopy(const Nauczyciel *naucz) {
}

void podwyzka(Nauczyciel *naucz, float inflacja){
}


void podwyzkaPensum(Nauczyciel *naucz, unsigned int ileGodzin) {
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
}



