#include<stdio.h>

int main(){
int P, d1, d2;

scanf("%d %d %d", &P, &d1, &d2 );

    if(P==1){
        if((d1+d2)%2==0){
             printf("1");
        }else{
            printf("0");
        }
    }
    if(P==0){
        if((d1+d2)%2==0){
             printf("0");
        }else{
            printf("1");
        }
    }

return 0;
}
