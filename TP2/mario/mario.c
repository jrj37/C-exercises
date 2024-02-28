
#include <stdio.h>
int main(void){
 int escalier;
 
 scanf("%d",&escalier);
 int a = escalier;
 if(escalier<=0){
 printf("IMPOSSIBLE");
 }
 else{
 int i=2;
 while(escalier!=0){
 for (int j=0; j<a-i+1; j++){
 
 printf(" ");
 }
 for (int j=0; j<i; j++){
 printf("#");
 }
 printf("\n");
 i++;
 escalier--;
 }}
 
 return 0;
}