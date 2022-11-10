#include <stdio.h>

int main(void) {
int cv, ce, cs, fv, fe, fs, pontosC, pontosF;

  scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
  pontosC = (cv*3) + ce;
  pontosF = (fv*3) + fe;
  if(pontosC == pontosF){
    if(cs == fs){
      printf("=");
    }else if(cs > fs){
      printf("C");
    }else{
      printf("F");
    }
  }else if(pontosC > pontosF){
    printf("C");
  }else{
    printf("F");
  }
  
  return 0;
}