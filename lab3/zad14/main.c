#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    float k;
    printf("podaj liczbe:/n");
    scanf("%f",&k);
    for(int m=1;m<=k;m++)
        for(int n=1;n<=k;n++)
    {
        a=m*m-n*m;
        b=2*m*n;
        c=m*m+n*n;
        if(a<=k&&b<=k&&c<=k&&a>=1&&b>=1&&c>=1)
    }
    return 0;
}
