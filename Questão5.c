#include <stdio.h>

int main(void) {
  int num;
  int num2;
  printf("Digite a quantidade de elementos da PA: \n");
  scanf("%d", &num);
  printf("Digite a razão da PA; \n");
  scanf("%d", &num2);
  for(int i = 0; i<=num; i = i +num2){
    printf("%d",i);
    printf(" ");
  }
  return 0;
}