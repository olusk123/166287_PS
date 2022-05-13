#include "LineSegment.h"

LineSegment makeLineSegment(int ax,int ay,int bx,int by)
{
    LineSegment tmp;
    tmp.a.x = ax;
    tmp.a.y = ay;
    tmp.b.x = bx;
    tmp.b.y = by;
    return tmp;
}
void show(const LineSegment *s)
{
    printf("poczatek odc to punkt: (%d %d)\n",s->a.x,s->a.y);
    printf("koniec odc to punkt: (%d,%d)\n\n",s->b.x,s->b.y);
}
