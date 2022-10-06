#include<stdio.h>
#include<string.h>

int main(void){
char cartas[156], erro[20];
int C = 13, E = 13, U = 13, P = 13, i=0, j=0;
    scanf("%s", cartas);
    
   if(strlen(cartas)>2){
    for(i=0; i<strlen(cartas); i+=3){
        for(j=0; j<strlen(cartas); j+=3){
            if(cartas[i] == cartas[j] && cartas[i+1] == cartas[j+1] && cartas[i+2] == cartas[j+2] && i!=j){
                if(cartas[i+2] == 'C'){
                    C-=14;
                }
                if(cartas[i+2] == 'E'){
                    E-=14;
                }
                if(cartas[i+2] == 'U'){
                    U-=14;
                }
                if(cartas[i+2] == 'P'){
                    P-=14;
                }
            }    
        }
    }
    
    
        for(int i=0;  i<strlen(cartas); i++){
            if(cartas[i] == 'C'){
                C--;
            }
            if(cartas[i] == 'E'){
                E--;
            }
            if(cartas[i] == 'U'){
                U--;                
            }
            if(cartas[i] == 'P'){
                P--;
            }
        }
    }

    if(C>=0){
        printf("%d\n", C);
    }else
        printf("erro\n");
    if(E>=0){
        printf("%d\n", E);
    }else
        printf("erro\n");
    if(U>=0){
        printf("%d\n", U);
    }else
        printf("erro\n");
    if(P>=0){
        printf("%d\n", P);
    }else
        printf("erro\n");

    return 0;
    
}
