#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * removeLetter(char* mot,char lettre) {
    char* arg2= malloc(strlen(mot)+1);
int i=0;

if (!arg2){

    return NULL;
}
    for(long unsigned int k=0;k<strlen(mot); k++){
        if (mot[k]!= lettre){
            arg2[i]= mot[k];
            i++;

        }
        



        }
    arg2[i]= '\0'; 
    return arg2;
    

}