#include <stdio.h>
#include <stdlib.h>
int main (){
    long long n;
    //int a;
    scanf ("%lli\n",&n);
    long long tab1[n][n];
    
    if (n>30 || n<1){
        exit(1);
    }
    for (long long  j=0; j<n; j++){
        for (long long i=0; i<=j; i++){
            scanf("%lli",&tab1[j][i]);
            //printf ("z\n");
        }
    }

    for (long long j=n-2;j>=0; j--){
        for (long long i=0; i<=j;i++){
            long long b = tab1[j][i]+ tab1[j+1][i];
            long long c = tab1[j][i] + tab1[j+1][i+1];
            if (c<b){
    
                    tab1[j][i]= b;
            }
            else {
        
                        tab1[j][i]=c;
                
                
                }
        
            }}
            long long l = tab1[0][0];
            printf ("%lli\n",l);
        

        
    


    return 0;
    }











