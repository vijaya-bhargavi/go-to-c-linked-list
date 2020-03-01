%module goc
%{
    #include "goc.h"
    	struct Node;
        struct List;
%}

%include "goc.h"
extern void Insert(struct List *l,struct Node *ptr);
extern void Display_front(struct List *l);
extern void Display_back(struct List *l);
