#include<stdio.h>
#include<string.h>

int main(){

char frase[200], alfabeto[23]="abcdefghijlmnopqrstuvxz";
int con=0;

    fgets(frase, 200, stdin);

    for(int i=0; i<strlen(frase); i++){
        for(int j=0; j<strlen(alfabeto); j++){
            if(frase[i]==alfabeto[j]){
                alfabeto[j]='0';
                con++;
            }
        }
    }
    if(con==23){
        printf("S");
    }else{
        printf("N");
    }

    return 0;
}
