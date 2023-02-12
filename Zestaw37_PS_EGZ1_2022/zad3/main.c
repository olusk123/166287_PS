#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int tab[][m])
{
    if(n!=m)
        return 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(tab[i][j] != 0)
                return 0;
        }
    }
    return 1;
}


void wypisz(int n, int m, int tab[][m])
{
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("[%d,%d]=%d, ",i,j,tab[i][j]);
       }
       printf("\n");
   }
}

int main()
{
    int tab[3][3] = {{1, 0, 0}, {-3, 5, 0}, {44, 2, -2}};
    wypisz(3,3,tab);
    printf("%d", foo(3,3,tab));
    return 0;
}
