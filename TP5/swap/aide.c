#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap (void*a ,void *b,size_t size){
    void *c=malloc(sizeof( int ) *size);
    if (c==NULL){
        EXIT_FAILURE;
    }
    memcpy( c, a, size );
    memcpy( a, b, size );
    memcpy( b, c, size );
    free(c);
}
int main(){
    int tab[]={1,2,3};
    int tab2[]={3,4,5};
    swap (tab ,tab2,3);
    printf("%i\n",tab[0]);
    return 1;
}


