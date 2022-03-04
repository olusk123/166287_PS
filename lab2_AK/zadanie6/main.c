 #include <stdio.h>
#include <stdlib.h>
int main ()
{
   int a, b, x;
   char c;
       printf("Wpisz pierwsza liczbe : \n");
            scanf("%d", &a);
       printf("Wpisz druga liczbe: \n");
            scanf("%d", &b);
            getchar();
       printf("Jaka operacje chcesz wykonac (podaj znak): \n");
            scanf("%c", &c);

switch (c)
{
          case   '+': x=a+b;
                   printf("Wynik to: %d\n", x);
                   break;
          case   '-': x=a-b;
                   printf("Wynik to: %d\n", x);
                   break;
          case   '*': x=a*b;
                   printf("Wynik to: %d\n", x);
                   break;
          case   '/': x=a/b;
                   printf("Wynik to: %d\n", x);

        if (b==0)
        {
            printf ("Nie mozna dzielic przez zero ");
                 }
        else
        {

                 '/'; x=a/b;
                   printf("Wynik to: %d\n", x);

                 }

        break;

}
return 0;
}
