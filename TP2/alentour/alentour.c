#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int a;
    int v;
    int count = 0;
    scanf("%i",&n);
    scanf("%i",&a);
    for (int i=0;i<a;i++){
        scanf("%i",&v);
        if (abs(n-v)<=50){
            count++;        
        }
    }
    printf("%i\n",count);

    return 0;
}