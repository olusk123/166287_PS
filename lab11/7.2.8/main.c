#include <stdio.h>
#include <stdlib.h>

  typedef struct student{
        char imie[50];
        char nazwsiko[50];
        char adres[50];
        char pesel[50];
        char kieunek_i_numer_legitymacji[50];
    }student;

void foo(student *a)
{
    printf("podaj imie\n");
    scanf(" %s",a->imie);
    printf("podaj nazwisko\n");
    scanf(" %s",a->nazwsiko);
    printf("podaj adres\n");
    scanf(" %s",a->adres);
    printf("podaj pesel\n");
    scanf(" %s",a->pesel);
    printf("podaj kierunek i numer legitymacji\n");
    scanf(" %s",a->kieunek_i_numer_legitymacji);
}
void wypisz(struct student a)
{
    printf("imie: %s",a.imie);
    printf("Nazwisko: %s",a.nazwsiko);
    printf("adres: %s",a.adres);
    printf("pesel: %s",a.pesel);
    printf("Kierunek i numer Legitymacji: %s",a.kieunek_i_numer_legitymacji);
}
int main()
{
   student olo;
   foo(&olo);
   wypisz(olo);
    return 0;
}
