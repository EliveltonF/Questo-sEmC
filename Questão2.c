#include <stdio.h>

int main(void) {
  int num = 0;
  printf("Digite um numero inteiro: \n");
  scanf("%d", & num);
  if(num % 2 ==0){
    printf("É par!\n");
  }else{
  printf("Não é Par!\n");
  }
  return 0;
}