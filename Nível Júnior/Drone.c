#include<stdio.h>

int main(){
int A, B, C, H, L;

scanf("%d%d%d%d%d", &A, &B, &C, &H, &L);

    if(A<=H && B<=L || A<=H && C<=L || B<=H && C<=L || A<=L && B<=H || A<=L && C<=H || B<=L && C<=H ){
        printf("S");
        }else{
            printf("N");
            }

return 0;
}
