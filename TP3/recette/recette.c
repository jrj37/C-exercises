
#include <stdio.h>
int main(){
   int prix[10]={9, 5, 12, 15, 7, 42, 13, 10, 1,20};
   int tn[10];
   int prixtot=0;
for(int i=0;i<10; i++){

    scanf ("%i",&tn[i]);
    prixtot= prixtot + tn[i]*prix[i]; 
}
printf("%i\n",prixtot);
    return 0;
}