#include <stdio.h>
#include "tps_unit_test.h"
#include "array-list.h"
#include "stdlib.h"
typedef struct list_t{
    void ** elements;
    size_t allocated;
    size_t size;
    } list_t;

list_t* list_create(){
   
    list_t* l= malloc(sizeof(list_t));
    if (l==NULL){
        return NULL;
        }
    l->allocated =10;
    l->size=0;  
    void ** machin= malloc(l->allocated*sizeof(void *));
   if(machin== NULL){
    free(l);
    return NULL;
   }
   l->elements=machin;
   return l;
}
int list_append(list_t* l,void * i){
    void ** elements1;
    
    if (l->size==l->allocated){
     elements1= realloc (l->elements, sizeof(void*)* l->allocated*2);
     if (!elements1){
        return 0;
     }
     l-> allocated *=2;
     //l->allocated = l->allocated * 2;
     l->elements =elements1;
     l->elements[l->size] = i;
     l->size =l->size+1;
     //l->size++;
     return 1;

    }
    else {
        l->elements[l->size] = i;
        l->size =l->size+1;
   
        return 1;

    }
}
int list_insert(list_t * l,  int a, void *i){
    void ** elements1;
 if (l->size==l->allocated){
     elements1= realloc (l->elements, sizeof(void*)* l->allocated*2);
      l-> allocated *=2;

     if (!elements1){
        return 0;
     }
          l->elements =elements1;}
           void * z = l->elements[a];
           l-> elements[a]=i;
    for (int k=a ; k<l->size; k++){
        void *v = l->elements[k+1];
       
         l->elements[k+1] = z;
         z=v;
           }
    
l->elements[a];
l->size++;
return 1;

}
int list_prepend(list_t *l, void * i){
    list_insert(l,0,i);


}
int list_size(list_t *l){
    return l->size;

}
void list_free(list_t *l){
    free(l->elements);
    free(l);
    
}

void list_set(list_t *l,int a,void* i){
    
     l->elements[a] = i;
     
     
}
 /**
 * Fonction list_take
 * 
 * retourne l'élément à la position idx, puis enlève cet élément de la liste
 */
void* list_take(list_t *l,int k){
    void* tmp = l->elements[k];
    for (int i=k; i<l->size; i++){
        l->elements[k] = l->elements[k+1];
    }
    l->size--;
    return tmp;
}
/**
 * Fonction list_get
 * 
 * retourne le (idx+1)-ieme élément.
 * En cas de dépassement, le comportement est indéfini
 * (très probablement une segfault)
 */

void *list_get(list_t *l,int i){
    return l->elements[i];
}



