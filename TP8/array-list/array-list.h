#include <stdio.h>
#include "tps_unit_test.h"


typedef struct  list_t list_t;


list_t* list_create();// fait

int list_append(list_t* elements,void * i); //fait
void *list_get(list_t* l,int i);

int list_prepend(list_t *l, void * i);// fait
int list_insert(list_t * l, int a, void *i); //fait
void list_set(list_t *l, int a,void * i); //fait
 
void *list_take(list_t *l,int k);//fait


int  list_size(list_t *l); //fait

void list_free(list_t *l); // fait
