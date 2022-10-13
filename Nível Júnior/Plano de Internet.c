#include<stdio.h>

int main(){
int mensal, dias, dados, saida=0;

    scanf("%d", &mensal);
    scanf("%d", &dias);

    for(int i=0; i<dias; i++){
        scanf("%d", &dados);
        saida += mensal - dados;
    }

    saida+=mensal;
    printf("%d", saida );

}
