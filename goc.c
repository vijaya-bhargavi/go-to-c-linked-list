#include<stdio.h>
#include"goc.h"
struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};
struct List{
	struct Node *head;
	struct Node *tail;
};

void Insert(struct List *l,struct Node *ptr){
    if (l->head==NULL){
        l->head=l->tail=ptr;
        printf("%d",ptr->data);
    }
    else{
        l->tail->next=ptr;
        ptr->prev=l->tail;
        l->tail=ptr;
    }
}

void Display_front(struct List* l){
    for(struct Node *xptr=l->head;xptr!=NULL;xptr=xptr->next){
        printf("%d ",xptr->data);
    }
}

void Display_back(struct List* l){
    printf("\n");
    for(struct Node *xptr=l->tail;xptr!=NULL;xptr=xptr->prev){
        printf("%d ",xptr->data);
    }
}
