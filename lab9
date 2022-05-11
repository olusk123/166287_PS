#include <stdio.h>
#include <stdlib.h>
#include "point.c"
#include "point.h"

typedef struct LineSegment
{
     Point a, b;
}LineSegment;
LineSegment MakeLineSegment( int ax, int ay, int bx, int by)
{
     Point pa=makePoint(ax,ay);
     Point pb=makePoint(bx,by);
     struct LineSegment temp;
     temp.a= pa;
     temp.b= pb;
     return temp;
}
LineSegment MakeLineSegmentFromPoints(const Point *a,const Point *b)
{
    struct LineSegment temp;
    temp.a = *a;
    temp.b = *b;
    return temp;
}
double length(const LineSegment *s)
{
    return sqrt(((s->a.x)-(s->b.x)*(s->a.x)-(s->b.x)+(s->a.y)-(s->b.y)*(s->a.y)*(s->a.y)-(s->b.y)));
}
int main()
{

    return 0;
}
