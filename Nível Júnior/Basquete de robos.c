#include <stdio.h>

int main()
{
    int distancia;

    scanf("%d", &distancia);

    if (distancia <= 800){

        printf("1");
    }
    else if (distancia <= 1400){

        printf("2");
    }
    else if (distancia <= 2000){
        
        printf("3");
    }
    return 0;
}