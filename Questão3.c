#include <stdio.h>

int main(void) {
  int num;
  printf("Digite um numero: \n");
  scanf("%d", &num);
  if (num == 1 || num ==0){
    printf("Seu numero fatorial: 1");
  }else{
    int a ;
    for(int i = num -1; i > 0;i = i -1){
      num = num *i;
    }printf("%d", num);
  }
  return 0;
}