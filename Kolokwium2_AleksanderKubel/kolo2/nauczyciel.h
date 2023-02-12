#ifndef NAUCZYCIEL_H
#define NAUCZYCIEL_H
#define MAX_LEN 50
#include <stdbool.h>

/*
Zdefiniuj sta�� MAX_LEN r�wn� 50,
 a nast�pnie zdefiniuj C-struktur� Nauczyciel o polach nazwisko typu char[MAX_LEN-1],
imie typu char[MAX_LEN-1], pensum typu int, pensja typu double oraz czyDyplomowany typu bool. Zdefiniuj nast�puj�ce funkcje:
*/
typedef struct Nauczyciel{
    char nazwisko[MAX_LEN-1];
    char imie[MAX_LEN-1];
    int pensum;
    double pensja;
    bool czyDyplomowany;

}Nauczyciel;


// Tworzy struktur� Nauczyciel
Nauczyciel makeNauczyciel(const char *nazwisko, const char *imie, int pensum, double pensja, bool czyDyplomowany);

// Tworzy kopi� Nauczyciela
Nauczyciel makeNauczycielCopy(const Nauczyciel *naucz);

// Zwi�ksza pensj� danego Nauczyciela o inflacj�
void podwyzka(Nauczyciel *naucz, float inflacja);

// Zwi�ksza pensum danego nauczyciela
void podwyzkaPensum(Nauczyciel *naucz, int ileGodzin);


// Wy�wietla dane Nauczyciela
void show(const Nauczyciel *naucz);

#endif
