#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x,y,z,delta,x1,x2;
    printf("Podaj x: ");
    scanf("%f", &x);
    printf("Podaj y: ");
    scanf("%f", &y);
    printf("Podaj z: ");
    scanf("%f", &z);

    if(x==0) {
        printf("blad");
    }else {
        delta=y*y-4*x*z;
        if(delta<0) printf("delta jest ujemna");
        else if(delta==0){
            x1=-y/(2*x);
            printf("x=%f",x1);
        }else {
            x1=(-y-sqrt(delta))/(2*x);
            x2=(-y+sqrt(delta))/(2*x);
            printf("x1=%f, x2=%f",x1,x2);
        }
    }

}
