#ifndef NAUCZYCIEL_H
#define NAUCZYCIEL_H


#include <stdbool.h>

/*
Zdefiniuj stałą MAX_LEN równą 50, a następnie zdefiniuj C-strukturę Nauczyciel o polach nazwisko typu char[MAX_LEN-1], imie typu char[MAX_LEN-1], pensum typu int, pensja typu double oraz czyDyplomowany typu bool. Zdefiniuj następujące funkcje:
*/



// Tworzy strukturę Nauczyciel
Nauczyciel makeNauczyciel(const char *nazwisko, const char *imie, int pensum, double pensja, bool czyDyplomowany);

// Tworzy kopię Nauczyciela
Nauczyciel makeNauczycielCopy(const Nauczyciel *naucz);

// Zwiększa pensję danego Nauczyciela o inflację
void podwyzka(Nauczyciel *naucz, float inflacja);

// Zwiększa pensum danego nauczyciela
void podwyzkaPensum(Nauczyciel *naucz, int ileGodzin);


// Wyświetla dane Nauczyciela
void show(const Nauczyciel *naucz);

#endif
