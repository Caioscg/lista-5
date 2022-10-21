#include <stdio.h>
#include <string.h>
 
int main(void){
    char str[10000];
    /*else if ((strcmp(str,"")) == 0){
            printf("\n");
        }
    */
 
    while (scanf("%[^\n]%*c", str)!=EOF){
        if ((strcmp(str, "brasil")) == 0){ // botar aspas duplas pois texto
            printf("Feliz Natal!");
        } else if ((strcmp(str, "alemanha"))== 0){
            printf("Frohliche Weihnachten!");
        } else if ((strcmp(str,"austria")) == 0){
            printf("Frohe Weihnacht!");
        }else if ((strcmp(str,"coreia")) == 0){
            printf("Chuk Sung Tan!");
        }else if ((strcmp(str,"espanha")) == 0){
            printf("Feliz Navidad!");
        }else if ((strcmp(str,"grecia")) == 0){
            printf("Kala Christougena!");
        }else if ((strcmp(str,"estados-unidos")) == 0||((strcmp(str,"inglaterra")) == 0)){
            printf("Merry Christmas!");
        }else if ((strcmp(str,"australia")) == 0){
            printf("Merry Christmas!");
        }else if ((strcmp(str,"portugal")) == 0){
            printf("Feliz Natal!");
        }else if ((strcmp(str,"suecia")) == 0){
            printf("God Jul!");
        }else if ((strcmp(str,"turquia")) == 0){
            printf("Mutlu Noeller!");
        }else if ((strcmp(str,"argentina")) == 0){
            printf("Feliz Navidad!");
        }else if ((strcmp(str,"chile")) == 0){
            printf("Feliz Navidad!");
        }else if ((strcmp(str,"mexico")) == 0){
            printf("Feliz Navidad!");
        }else if ((strcmp(str,"antardida")) == 0){
            printf("Merry Christmas!");
        }else if ((strcmp(str,"canada")) == 0){
            printf("Merry Christmas!");
        }else if ((strcmp(str,"irlanda")) == 0){
            printf("Nollaig Shona Dhuit!");
        }else if ((strcmp(str,"belgica")) == 0){
            printf("Zalig Kerstfeest!");
        }else if ((strcmp(str,"italia")) == 0){
            printf("Buon Natale!");
        }else if ((strcmp(str,"libia")) == 0){
            printf("Buon Natale!");
        }else if ((strcmp(str,"siria")) == 0){
            printf("Milad Mubarak!");
        }else if ((strcmp(str,"marrocos")) == 0){
            printf("Milad Mubarak!");
        }else if ((strcmp(str,"japao")) == 0){
            printf("Merii Kurisumasu!");
        }else{
            printf("-- NOT FOUND --");
        }
        printf("\n");        
        str[0] = '\0';
        
        
    } 
    
 
    return 0;
}