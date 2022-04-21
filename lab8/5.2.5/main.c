#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void przepisz(const char * src[],const char * dest[]){
    memcpy(dest, src, strlen(src)+1);
}

int main()
{
    const char src[20] = "Napis1";
    char dest[20];
    strcpy(dest,"jakisnapis");
    printf("przed = %s\n", dest);
    przepisz(src,dest);
    printf("po = %s\n", dest);
    return 0;
}
