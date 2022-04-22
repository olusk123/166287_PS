#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tablica(int t[][100], int n)
{
    int suma=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<100;j++)
            suma+=t[i][j];
    return suma;
}

size_t strlen(const char*s)
{
    size_t len = 0;
    while(*s++)
        {
            ++len;
        }
    return len;
}

char*strcpy(char *t,const char *s)
{
    char*p = t;
    while((*t++ = *s++));
    return p;
}

int main(void)
{

    char *s = "Oto rzekl Mistrz Programista:\n\n\
    \"Po trzech dniach bez programowania, \
    zycie staje sie pozbawione sensu.\"\n";
    char *p = calloc(strlen(s) + 1, sizeof(char));
    strcpy(p, s);
    printf("%s\n", p);
    free(p);
    return 0;
}
