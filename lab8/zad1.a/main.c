#include<stdio.h>
#include<stdlib.h>

size_t strlen(const char*s)
{
    size_t len = 0;
    while(*s++)
        {
            ++len;
        }
    return len;
}
char*strcpy(char*t,const char*s)
{
    char*p = t;
    while((*t++ =*s++));
    return p;
}
char*strncpy(char*t,const char*s,size_t n)
{
    int i=0;
    while(*s!=0)
        i++;
    if(i<n)
        n=i;
    printf("%d\n", n);
    i=0;
    while(*s!=*t)
    {
        *t=*s;
        i++;
    }
    *t=0;
    return i;
}
char*strcat(char*t,const char*s)
{
    int i,j;
    for(i=0;t[i]!='\0';i++)
        for(j=0;s[i]!='\0';i++)
        t[i+j]=s[j];
    t[i+j]='\0';
    return t;
}
char*strncat(char*t,const char*s,size_t n)
{
    size_t t_len = strlen(t);
        size_t i;

    for(i;i<n && s[i]!='\0';i++)
        t[t_len+i]=s[i];
    t[t_len+i]='\0';

    return t;
}

int main(void)
{
    char*s = "napisnr1";
    char*p = calloc(strlen(s) + 1,sizeof(char));
    strcpy(p, s);
    printf("%s\n", p);
    free(p);
    return 0;
}
