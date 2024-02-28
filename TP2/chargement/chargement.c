#include <stdio.h>
int progressBar(int n){
    if (n<0){
        printf("[          ]\n");
        return 0;
    }
    if(n>10){
        printf("[==========]\n");
        return 0;
    }
    printf("[");
    for (int i=0;i<n;i++){
        printf("=");
    }
    for (int k=0;k<10-n;k++){
        printf(" ");

    }
    printf("]\n");
    return 1;
}
int main(){
    int n;
    scanf("%i",&n);
    progressBar(n);
    return 0;
}