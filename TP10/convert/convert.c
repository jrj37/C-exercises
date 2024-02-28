#include <stdio.h>
#include <stdlib.h>
int size(FILE * fichier1){
    char ch;
    int count=0;
    while((ch=fgetc(fichier1))!=EOF){
        if(ch == '\n') { count++; }
    }
    fseek(fichier1, 0, SEEK_SET);
    printf("%d\n", count);
    return count;
}
int main(int argc,char *argv[]){
    if (argc !=3){
        printf("pas le bon nbre d'argument\n");
        return 1;
    }
    else{
        FILE * fichier1= fopen(argv[1],"r");
        FILE * fichier2= fopen(argv[2],"w+");
        if (fichier1==NULL){
        printf("le premier fichier ne peut pas être ouvert");
        return 1;
        }
        if (fichier2==NULL){
            printf("le deuxième fichier ne peut pas être ouvert");
            return 1;
        }
        char *T = malloc(1000);
        
        int taille = size(fichier1);
        double T1[taille];
        for (int i=0;i<taille;i++){
            fgets(T,1000,fichier1);
            T1[i]=strtod(T,NULL);
            T1[i] = (T1[i]*1.8)+32;
            
        }
        free(T);
        for (int i = 0; i < taille ; i++){
        fprintf(fichier2, "%.2f\n", T1[i]);
    }
    fclose(fichier1);
    fclose(fichier2);
    return 0;


    }
}