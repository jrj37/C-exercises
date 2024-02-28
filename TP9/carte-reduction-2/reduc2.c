#include <stdio.h>
int main(){
    long long M;
    long long N;
    scanf("%i",&N);
    long long tab[N];
    for (long k=0;k<N;k++){
        scanf("%i",&M);
        long long[k]= M;
    }
    for (long long i=0;i<N;i++){  
        for (long long k=i+1;k<N;k++){ 
            if (tab[i]==tab[k]){    
                printf("%i\n",tab[k]);
                return 0;
                }
                }                    
    }
    int a =-1;
    printf("%i",a);
    return 0;