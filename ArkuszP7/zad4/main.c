#include <stdio.h>
#include <stdlib.h>

struct elem {
    int i;
    struct elem * next;
};

void wypisz(struct elem *lista)
{
    if(lista==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(lista!=NULL)
    {
        printf("%d\n", lista->i);
        lista=lista->next;
    }
    printf("-----\n");
}

void wypiszGlowa(struct elem *lista2)
{
    struct elem*wsk=lista2->next;
    if(wsk==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(wsk!=NULL)
    {
        printf("%d\n", wsk->i);
        wsk=wsk->next;
    }
    printf("-----\n");
}

int suma(struct elem *lista1, struct elem *lista2)
{
    int sum = 0;
    struct elem*wsk=lista1;
    struct elem*wsk2=lista2->next;
    while(wsk!=NULL)
    {
        while(wsk2!=NULL)
        {
            if(wsk2->i%2!=0)
                sum+=wsk2->i;
            wsk2=wsk2->next;
        }
        if(wsk->i%2!=0)
            sum+=wsk->i;
        wsk=wsk->next;
    }
    return sum;
}
int main()
{
    struct elem * l1=malloc(sizeof(struct elem));
    l1->i=2;
    l1->next=malloc(sizeof(struct elem));
    l1->next->i=7;
    l1->next->next=malloc(sizeof(struct elem));
    l1->next->next->i=2;
    l1->next->next->next=NULL;

    struct elem * l2=malloc(sizeof(struct elem));
    l2->next=malloc(sizeof(struct elem));
    l2->next->i=2;
    l2->next->next=malloc(sizeof(struct elem));
    l2->next->next->i=2;
    l2->next->next->next=malloc(sizeof(struct elem));
    l2->next->next->next->i=4;
    l2->next->next->next->next=NULL;
    wypisz(l1);
    wypiszGlowa(l2);
    printf("%d", suma(l1,l2));
    return 0;
}
