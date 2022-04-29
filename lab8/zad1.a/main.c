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
int strend(const char t[], const char s[])
{
    int i=0, j=0;
    while(t[i])
    {
        if(t[i]==s[j])
            j++;
        else
            j=0;
        i++;
    }
    i=0;
    while(s[i])
        i++;
    if(i!=j)
        return 0;
    return 1;
}
int strindex(const char t[], const char s[])
{
    int i=0, j=0, k=0, l;
    while(s[i])
        i++;
    while(t[j])
    {
        if(t[j]==s[k])
        {
            l=j;
            while(t[l]==s[k])
            {
                l++;
                k++;
            }
            if(i==k)
                return j;
            k=0;
        }
        j++;
    }
    return -1;

}
int main(void)
{
    char*s = "napisnr1";
    char*p = calloc(strlen(s) + 1,sizeof(char));
    strcpy(p, s);
     printf("%s\n", s);
    printf("%s\n", p);
    strncpy(p,s,11);
    printf("%s\n", s);
    printf("%s\n", p);
    char * r = calloc(100, sizeof(char));
    r[0]= 'j';
    r[1]= 'a';
    r[2]= 'k';
    r[3]= 'i';
    r[4]= 'e';
    r[5]= 's';
    r[6]= ' ';
    r[7]= 's';
    r[8]= 'l';
    r[9]= 'o';
    r[10] = 'w';
    r[11] = 'o';
    r[12] = 0;
    strcat(r,s);
    printf("%s\n", s);
    printf("%s\n", r);
    strncat(r,s,12);
    printf("%s\n", s);
    printf("%s\n", r);
    printf("%d\n",strend(r,s));
    printf("%d\n",strindex(r,s));
    free(p);
    free(r);
    return 0;
}

