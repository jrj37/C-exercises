#include <stdio.h>
#include <string.h>

void space_to_tab(char *phrase){
    int i=0;
    int espace=0;
    int k=0;
    char T[1000];
    char c=phrase[0];
    int modulo=0;
    while (c!='\0'){
        if (((espace+modulo)%8 == 0) && (espace!=0)){
            T[i]= '\t';
            i++;
            espace=0;
            modulo=0;
        }
        if (c==' ' ){
            espace++;
        }
        else{
            if (espace!=0){
                for (int j=0; j<=espace;j++){
                    T[i+j]= ' ';   
                }
                i+=espace;
                modulo+= espace;
                espace=0;
            }
            T[i]= c;
            i++;
            if (c=='\t'){
                modulo=0;
            }
            else {
                modulo++;
            }
            
        }
        k++;
        c=phrase[k];
    }
        if (((espace+modulo)%8==0) && (espace!=0)){
            T[i]='\t';
            i++;
            espace=0;
            modulo=0;
        }
        if (espace!=0){
            for (int j=0;j<=espace;j++){
                T[i+j]=' ';
            }
            i += espace;
            modulo+=espace;
            espace=0;
        }
        T[i]='\0';
    strcpy(phrase,T);
}