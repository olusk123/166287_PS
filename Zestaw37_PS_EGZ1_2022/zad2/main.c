#include <stdio.h>
#include <stdlib.h>

int foo(char *napis, char znak)
{
    int index = -1;
    for(int i=0; napis[i]!='\0'; i++)
    {
      if(napis[i]==znak)
        index=i;
    }
    return index;
}
int main()
{
    int index;
    char napis[] = "Ala ma 3 psy";
    index = foo(napis, 'a');
    if(index != -1)
        printf("%p", &napis);
    else
        printf("NULL");
    return 0;
}
