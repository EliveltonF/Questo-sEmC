#include <stdio.h>

int main(void) {
  int num;
  printf("Digite um ano D.C: \n");
  scanf("%d", &num);
  if (num % 4 == 0){
    printf("Ano bissexto!");
  }else{
    printf("normal!!!!");
  }
  
  return 0;
}
