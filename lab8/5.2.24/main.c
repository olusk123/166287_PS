#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kopiuj(const char * tab1[],char napis){
    memcpy(tab1, napis, strlen(tab1)+1);
}

int main()
{
    char napis ="NAPIS";
    char tab1[20];
    strcpy(tab1,"jakisnapis");
    printf("przed = %s\n", tab1);
    kopiuj(tab1,napis);
    printf("po = %s\n", tab1);
    return 0;
}
