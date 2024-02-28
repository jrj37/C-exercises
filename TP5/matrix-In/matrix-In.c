#include<stdio.h>
#include <stdlib.h>
#include "matrix-In.h"

int ** matrixI1(int n){

int **mat1 = malloc(sizeof(int *)*n);
 if(mat1==NULL){
free(mat1);
    return NULL;}
for (int i=0;i<n;i++){
  
    mat1[i] = malloc(sizeof(int )*n);
    if(mat1[i]==NULL){
    freeMatrix(i,mat1);

    return NULL;}        
     


    for (int j=0;j<n;j++){
        if (i==j){
             mat1[i][j] = 1;




    }
        else {

            mat1[i][j]=0;
    
    
} 



    }}
return mat1;
}





void matrixI2(int n, int *** mat){
*mat = matrixI1(n);}



void freeMatrix(int n, int ** mat){
for (int i=0;i<n; i++){

free(mat[i]);


}
free(mat);
}
