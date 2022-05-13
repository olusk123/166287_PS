#ifndef LINESEGMENT H
#define SEGMENT H
#include "point.h"

typedef struct LineSegment{
 Point a;
 Point b;

}LineSegment;

LineSegment makeLineSegment(int ax,int ay,int bx,int by);
void show(const LineSegment *s);

#endif // LINESEGMENT

