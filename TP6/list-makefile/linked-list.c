#include "linked-list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ll_node {
    int value;
    struct ll_node *next;
} ll_node;

struct ll_list {
    struct ll_node *first;
};



ll_list * ll_create(void) {
    ll_list * list = malloc(sizeof(ll_list));
    if(list==NULL)
        return 0;
    list->first = NULL;
    return list;
}


void ll_append(ll_list *list, int value) {
   ll_node * new_element = malloc(sizeof(ll_node));
    if(new_element == NULL) {
        fprintf(stderr, "Allocation error in ll_append\n");
        exit(1);
    }
    new_element->next = NULL;
    new_element->value = value;

    if(list->first == NULL) {
        list->first = new_element;
        return;
    }

    ll_node *it = list->first;
    while(it->next != NULL) {
        it = it->next;
    }
    it->next = new_element;
}
    
  
int ll_get(const ll_list *list, unsigned int value_idx) {
    if(list ==NULL)
        return -1;
    ll_node *it = list->first;

    for(unsigned int i = 0; i < value_idx; i++) {
        it = it->next;
    }
    return it->value;
}



void ll_free(ll_list *list) {
    if (list == NULL)
    {
        return;
    }
    ll_node* current = list->first;
    while(current != NULL){
        ll_node* aSupprimer = current;
        current = current->next;
        free(aSupprimer);
    }
    free(list);
}

size_t ll_size(ll_list *list)
{int i=0;
  ll_node* current = list->first;
while(current!= NULL) 
{ current = current->next; i++; } 

return i;
}

void ll_prepend(ll_list *list, int value){
    if(list==NULL)
        return;

    ll_node *n = (ll_node*) malloc(sizeof(ll_node));
    n->value = value;
    n->next = list->first;
    
    list->first = n;
}



int ll_first(ll_list *list){
if (list->first==NULL){

    exit(1) ;
}
return ll_get(list,0);
}

int ll_last(ll_list *list){
if (list->first==NULL){

    exit(1);
}

 
return ll_get(list,ll_size(list)-1);
}





void ll_pop_first(ll_list*list)
{
    if (list == NULL)
    {
        exit(1);
    }

    if (list->first != NULL)
    {
        ll_node* aSupprimer = list->first;
        list->first = list->first->next;
        free(aSupprimer);
    }
}
/*fonction qui enleve le dernier element*/
void ll_pop_last(ll_list*list){

    if(list == NULL){
        return;
    }
    else if (list->first ==NULL)
    {
        return;
    }
    

    ll_node* element = list->first;

     if(element->next==NULL){
        ll_pop_first(list);
        return;
     }
    
    ll_node* element2 = list->first;
     while (element->next->next != NULL)
     {
        element2=element->next;
        element=element2;
     }
     free(element->next);
     element->next=NULL;
}

