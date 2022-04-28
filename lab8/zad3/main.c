#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strend(char *s, char *t) {
    int  p;
    for (p = 0; p < strlen(s) - strlen(t); p++) {
        *s++;
    }
    printf("%s\n%s\n", s, t);
    if (s == t)
        return 1;
    return 0;
}

int main(void) {
    int bool = strend("Hello", "ello");
    printf("%i\n", bool);
    return 0;
}
