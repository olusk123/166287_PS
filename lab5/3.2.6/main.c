#include <stdio.h>
#include <stdlib.h>


void funkcja(int n,int *w) {
    *w = n;
}

int main() {

    int x, y=0;

    printf ("Podaj x: ");
   scanf ("%d", &x);
    printf ("Wartosc zmiennej y przed zmiana: %d\n", y);
    funkcja(x, &y);
    printf ("Wartosc zmiennej y po zmianie: %d", y);


    return 0;
}
