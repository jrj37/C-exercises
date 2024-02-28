#include <stdio.h>
int progressBar(int n){
    printf("[");
    for (int i=0;i<n;i++){
        printf("=");
    }
    for (int k=0;k<10-n;k++){
        printf(" ");

    }
    printf("]");
    return 1;

}
int main(){
    int n;
    scanf("%i",&n);
    progressBar(n);
    return 0;
}