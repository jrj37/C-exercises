#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap (void*a ,void *b,size_t size){
    void *c=malloc(sizeof( void* ) *size);
    if (c==NULL){
        EXIT_FAILURE;
    }
    memcpy( c, a, size );
    memcpy( a, b, size );
    memcpy( b, c, size );
    free(c);
}