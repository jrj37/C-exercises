#include <stdio.h>
int main(){
    long long M;
    long long N;
    scanf("%lli",&N);
    long long tab[N];
    for (long k=0;k<N;k++){
        scanf("%lli",&M);
        tab[k]= M;
    }
    for (long long i=0;i<N;i++){  
        for (long long k=i+1;k<N;k++){ 
            if (tab[i]==tab[k]){    
                printf("%lli\n",tab[k]);
                return 0;
                }
                }                    
    }
    int a =-1;
    printf("%i",a);
    return 0;}