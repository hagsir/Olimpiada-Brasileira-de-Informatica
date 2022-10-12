#include <stdio.h>

int main() {
int idades[3], cibele, celeste;
    
  for(int i=0; i<3; i++){
      scanf("%d", &idades[i]);
        if(i==0){
          cibele=i;
          celeste=i;
          } 
          if(idades[i]>idades[cibele]){
            cibele=i;          
            }else if(idades[i]<idades[celeste]){
              celeste=i;
              }
    }
  for(int i=0; i<3; i++){
    if(i!=cibele && i!=celeste && idades[i]>=5 && idades[i]<=100){
      printf("%d", idades[i]);
      break;
    }
  }
  return 0;
}