#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (int argc, char *argv[]){
    if (argc != 2){
        printf("Usage: dyck [word]");
        exit(2);
    }
    else {
        int countg=0;
        int countd=0;
        int count;
        char *T=argv[1];
        int n=strlen(T);
        for (int i=0;i<n;i++){
             printf("%i\n",T[i]);
            if (T[i]==40){
                countg++;
                printf("%i\n",countg);
            }
            if (T[i]==41){
                countd++;
                //printf("%i\n",countd);
            }
        }
            count= countg-countd;
            printf("%i",count);
            if (count==0){
                return 0;
            }
            else{
                return 1;
            }
    }
    return 0;
}