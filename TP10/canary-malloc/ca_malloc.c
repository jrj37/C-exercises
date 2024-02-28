#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void * ca_malloc(int n){
    int size = n;
    char * T = malloc(n+24);
    *(int *) T= size;
    for (int i=8; i<16;i++){
        ((char*)T)[i]='c';
        
    }
    for (int i=n+16; i<n+24;i++){
        ((char*) T)[i] ='c';
         
    }
    return ((char *) T)+16 ;
}

void ca_free(void * T){
    int size;
    for (int i=-8; i<0; i++){
        if (((char*)T)[i] != 'c'){
            fprintf(stderr, "Message\n");
            break;
        }
    }
    size=((int*)T)[-4];
    for (int k=size; k<size+8;k++){
        if (((char *)T)[k] != 'c'){
            fprintf(stderr, "Message\n");
            break;
        }
    }
    free(&((char *)T)[-16]);
}