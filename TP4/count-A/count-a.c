#include <stdio.h>
#include <string.h>
int main (int argc,char *argv[]){
    char lettre = 'A';
    int count=0;
    if (argc == 2){
        char * phrase = argv[1];
        int n = strlen(phrase);
        for (int i=0;i<n;i++){
            if (lettre == phrase[i]){
                count++;
            }
        }
    }
    else{
        return 42;
    }
    printf("%i\n",count);
    return 0;
}