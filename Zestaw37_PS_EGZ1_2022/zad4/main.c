#include <stdio.h>
#include <stdlib.h>

struct elem{
    int i;
    struct elem * next;
};

struct elem * usunpom(struct elem * lista, int x)
{
    struct elem *wsk, *wsk2;
    if (lista==NULL)
        return lista;
    wsk = lista;
    if(lista->i == x)
    {
        lista=lista->next;
        free(wsk);
    }
    else
    {
        while((wsk->next != NULL) && (wsk->next->i != x))
        {
            wsk=wsk->next;
        }
        if(wsk->next!=NULL)
        {
            wsk2=wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
    }
    return lista;
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

void wypiszGlowa(struct elem *lista)
{
    struct elem*wsk=lista->next;
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



struct elem * usun(struct elem * lista1, struct elem * lista2)
{
    struct elem * wsk = lista1;
    struct elem * wsk2 = lista2->next;
    while(wsk2!=NULL)
    {
        while(wsk!=NULL)
        {
            if(wsk->i==wsk2->i)
            {
                lista1=usunpom(lista1, wsk->i);
                wsk=lista1;
            }
            else
            {
                wsk=wsk->next;
            }
        }
        wsk=lista1;
        wsk2=wsk2->next;
    }
    return lista1;
};

int main()
{
    struct elem * l1=malloc(sizeof(struct elem));
    l1->i=3;
    l1->next=malloc(sizeof(struct elem));
    l1->next->i=6;
    l1->next->next=malloc(sizeof(struct elem));
    l1->next->next->i=8;
    l1->next->next->next=NULL;

    struct elem * l2=malloc(sizeof(struct elem));
    l2->next=malloc(sizeof(struct elem));
    l2->next->i=2;
    l2->next->next=malloc(sizeof(struct elem));
    l2->next->next->i=8;
    l2->next->next->next=malloc(sizeof(struct elem));
    l2->next->next->next->i=4;
    l2->next->next->next->next=NULL;
    wypisz(l1);
    wypiszGlowa(l2);
    l1=usun(l1,l2);
    wypisz(l1);
    return 0;
}
