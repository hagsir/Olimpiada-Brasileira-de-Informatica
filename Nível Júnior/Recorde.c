#include<stdio.h>

int main(){
int R, M, L;

    scanf("%d%d%d", &R, &M, &L);

    if((R+M+L)>=3 && (R+M+L)<=3000){ // Condição da restrição
        if(R<M){
            printf("RM\n");
        }else{
            printf("*\n");
        }
        if(R<L){
            printf("RO");
        }else{
            printf("*");
        }
    }

}
