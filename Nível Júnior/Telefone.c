#include<stdio.h>

int main(){
char telefone[8][4]={"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ",},palavra[100];

    scanf("%s", palavra);

    for(int i=0; i<strlen(palavra); i++){
        if(palavra[i]=='-'){
            printf("-");
        }
        for(int j=0; j<4; j++){
            for(int k=0; k<8; k++){
                if(palavra[i]==telefone[k][j]){
                   printf("%d", k+2);
                }
            }
        }
    }
}
