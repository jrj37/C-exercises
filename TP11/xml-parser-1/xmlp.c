#include <stdio.h>
#include "xmlp.h"
#include <string.h>

parser_error_type_t parse(const char *filename, parser_info_t *info){
    FILE * fichier= fopen(filename,"r");
        if (fichier==NULL){
            return ERROR_UNABLE_TO_OPEN_FILE;
        }
        char c=fgetc(fichier);
        char string[100];
        while (c!=EOF){
            if (c=='<'){
                c= fgetc(fichier);
                if (c=='/'){
                    int i=0;
                    c=fgetc(fichier);
                    while (c!='>' && c!=EOF){
                        string[i]=c;
                        c=fgetc(fichier);
                        if(c==EOF){
                            fprintf(stderr,"Unexpected end of tag (missing '>')\n");
                            return 2;
                        }
                        i++;
                    }
                    string[i]='\0';
                    info->handleCloseTag(string, info->data);
                }
                else{
                    int i=0;
                    int stop=0;
                    while (c!='>' && c!= EOF){
                        if (c==' '){
                           stop =1;
                        }
                        if (stop==1){
                            c=fgetc(fichier);
                        }
                        else{
                        string[i]=c;
                        c=fgetc(fichier);
                        i++;
                        if (c==EOF){
                            fprintf(stderr,"Unexpected end of tag (missing '>')\n");
                            return 2;
                        }
                        }
                    }
                    string[i]='\0';
                    info->handleOpenTag(string,info->data);
            }
            }
            else{
                c=fgetc(fichier);
                if (c== EOF){
                    break;
                }
                int i=0;
                    while (c!='<' && c!=EOF){
                        string[i]=c;
                        c=fgetc(fichier);
                        if (c==EOF){
                            fprintf(stderr,"Unexpected end of tag (missing '>')\n");
                            return 2;
                        }
                        i++;
                    }
                    string[i]='\0';
                info->handleText(string,info->data);
            }
        }
    fclose(fichier);
    return PARSER_OK;
}
