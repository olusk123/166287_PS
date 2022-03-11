#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m;
    printf("podaj pierwsza liczbe: \n");
    scanf("%d",&n);
    printf("podaj druga liczbe: \n");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        int w = i * n;
        printf("%d\n",w);
    }
    return 0;
}
