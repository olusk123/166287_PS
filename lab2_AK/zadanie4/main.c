#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1=1;
    int liczba2=4;
    int liczba3=3;
    int pomoc=0;
    if(liczba1>=liczba2)
        pomoc=liczba1;
        else
        pomoc=liczba2;
        if(pomoc>=liczba3)
            printf("najwieksza jest: %d",pomoc);
            else
        {
            pomoc=3;
            printf("najwieksza jest: %d",pomoc);
        }

    return 0;
}
