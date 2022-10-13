#include<stdio.h>

int main(){
char resultado[6];
int vitorias=0;

    for(int i=0; i<6; i++){
        fgets(resultado, 6, stdin);
        if(resultado[0] == 'V'){
            vitorias++;
        }
    }

    if(vitorias>4){
        printf("1");
    }else if(vitorias>2){
        printf("2");
    }else if(vitorias>0){
        printf("3");
    }else{
        printf("-1");
    }


return 0;
}
