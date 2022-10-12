#include <stdio.h>

int main()
{
    int linhas, saldo, transicao, menorsaldo;

    scanf("%d %d", &linhas, &saldo);
    menorsaldo = saldo;

    if (linhas >= 1 && linhas <= 30 && saldo >= -1000 && saldo <= 1000){
        for (int i = 0; i < linhas; i++){
            scanf("%d", &transicao);
            saldo += transicao;
            if (saldo < menorsaldo){
                menorsaldo = saldo;
            }
        }
    }

    printf("%d", menorsaldo);
    return 0;
}