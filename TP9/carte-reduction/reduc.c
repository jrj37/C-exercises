#include <stdio.h>
int main(){
    int M;
    int N;
    scanf("%i",&N);
    int tab[N];
    for (int k=0;k<N;k++){
        scanf("%i",&M);
        tab[k]= M;
    }
    for (int i=0;i<N;i++){  
        for (int k=i+1;k<N;k++){ 
            if (tab[i]==tab[k]){    
                printf("%i\n",tab[k]);
                return 0;
                }
                }                    
    }
    int a =-1;
    printf("%i",a);
    return 0;
}