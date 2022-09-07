#include <stdio.h>
#include <stdlib.h>

int foo(int **tab, int n, int m)
{
    if(n!=m)
        return 0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(tab[i][j] != 0)
                return 0;
        }
    }
    return 1;
}


void wypisz(int **tab, int n, int m)
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
    int ** tab=malloc(3*sizeof(int*));
    tab[0]=malloc(3*sizeof(int*));
    tab[1]=malloc(3*sizeof(int*));
    tab[2]=malloc(3*sizeof(int*));
    tab[0][0]=1;
    tab[0][1]=2;
    tab[0][2]=3;
    tab[1][0]=0;
    tab[1][1]=5;
    tab[1][2]=8;
    tab[2][0]=0;
    tab[2][1]=0;
    tab[2][2]=-2;
    wypisz(tab,3,3);
    printf("%d\n", foo(tab,3,3));
    return 0;
}
