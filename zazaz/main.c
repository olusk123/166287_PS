#include <stdio.h>
#include "namedpoint.h"

int main(int argc, char *argv[])
{
    NamedPoint tawerna = makeNamedPoint(3, 5, "Pod Mocnym Aniołem");
    show(&tawerna);
    printf("\n");
    move(&tawerna, 1, -1);
    show(&tawerna);
    printf("\n");
    NamedPoint centre = makeNamedPoint(0, 0, "Ratusz");
    printf("Odległość tawerny od centrum: %f\n", distance(&tawerna, &centre));
    return 0;
}
