#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double srednia(double x,double y,double z);
int main()
{
    printf("%f",srednia(4,5,6));
    return 0;
}
double srednia(double x,double y,double z)
{
    double w;
    w = fabs(x*y*z);
    w =  pow(w,(double)1/3);
    if(x*y*z<0)
        return -1*w;
    return w;
}
