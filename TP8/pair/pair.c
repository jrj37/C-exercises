#include "stdlib.h"
#include <stdio.h>
#include "tps_unit_test.h"
#include "pair.h"



pair_t *pair_create(void *first, void *second){
    pair_t* p = malloc(sizeof(pair_t) );
    if (p==NULL){
       
        return NULL;
   
    }
    p->first =first;
    p->second =second;

    return p;
}


void *pair_get_first(pair_t *p){
    return p->first;

}
void *pair_get_second(pair_t *p){
    return p->second;
}

void pair_free(pair_t *p){

    free (p);
}
void pair_swap(pair_t *p){
   void * a= p->first;
    p->first=p->second;
    p->second = a;
}