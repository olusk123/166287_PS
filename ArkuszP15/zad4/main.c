#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

struct node * concatHead(struct node * lista1, struct node * lista2)
{
    struct node * wsk;
    struct node * wsk2;
    if(lista1->next==NULL)
    {
        lista1->next=lista2->next;
        return lista1;
    }
    wsk=lista1->next;
    wsk2=lista2->next;
    while(wsk->next!=NULL)
        wsk=wsk->next;
    wsk->next=wsk2;
    return lista1;
};

void wypiszGlowa(struct node *lista)
{
    printf("glowa: %p\n", lista);
    lista=lista->next;
    if(lista==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(lista!=NULL)
    {
        printf("%d %p\n", lista->a, lista);
        lista=lista->next;
    }
    printf("-----\n");
}

int main()
{
    struct node * l1=malloc(sizeof(struct node));
    l1->next=malloc(sizeof(struct node));
    l1->next->a=2;
    l1->next->next=malloc(sizeof(struct node));
    l1->next->next->a=8;
    l1->next->next->next=malloc(sizeof(struct node));
    l1->next->next->next->a=4;
    l1->next->next->next->next=NULL;

    struct node * l2=malloc(sizeof(struct node));
    l2->next=malloc(sizeof(struct node));
    l2->next->a=3;
    l2->next->next=malloc(sizeof(struct node));
    l2->next->next->a=-1;
    l2->next->next->next=malloc(sizeof(struct node));
    l2->next->next->next->a=64;
    l2->next->next->next->next=NULL;
    wypiszGlowa(l1);
    wypiszGlowa(l2);
    l1=concatHead(l1,l2);
    wypiszGlowa(l1);
    return 0;
}
