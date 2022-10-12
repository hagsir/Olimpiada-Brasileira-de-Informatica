#include <stdio.h>
#include <string.h>

int main(void)
{
    char cartas[156], letrasNaipes[4] = {"CEUP"};
    int naipes[4] = {13, 13, 13, 13}, i, j, k;

    scanf("%s", cartas);

    if (strlen(cartas) > 2){
        for (i = 0; i < strlen(cartas); i += 3){
            for (j = 0; j < strlen(cartas); j += 3){
                if (cartas[i] == cartas[j] && cartas[i + 1] == cartas[j + 1] && cartas[i + 2] == cartas[j + 2] && i != j){
                    for (k = 0; k < 4; k++){
                        if (cartas[i + 2] == letrasNaipes[k]){
                            naipes[k] = -14;
                        }
                    }
                }
            }
        }

        for (i = 0; i < strlen(cartas); i++){
            for (int j = 0; j < 4; j++){
                if (cartas[i] == letrasNaipes[j]){
                    naipes[j]--;
                }
            }
        }
    }

    for (i = 0; i < 4; i++){
        if (naipes[i] >= 0){
            printf("%d\n", naipes[i]);
        }
        else{
            printf("erro\n");
        }
    }
    return 0;
}
