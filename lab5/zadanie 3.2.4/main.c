#include <stdio.h>
#include <stdlib.h>

void zamiana(int*w1,int *w2)
{
    if (*w2<*w1)
    {
      int i = *w1;
      *w1 = *w2;
      *w2 = i;
    }
}

int main()
{
    int a =421,b =44;
    int*w1 = &a;
    int*w2 = &b;
    zamiana(w1,w2);
    printf("a= %d \nb= %d",a,b);
    return 0;
}
