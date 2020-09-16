#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {

  int num;
  double soma_1, soma_2, multi_1, multi_2;
  double divi_1 = 0, divi_2 = 0;
  double menos_1, menos_2;
  double potencia = 0;
  

  while(true){

    printf("Menu: \n");
    printf("\n");
    printf("Sair[ 0 ]\nSomar [ 1 ]\nMultiplicar [ 2 ]\nDividir [ 3 ]\nSubtrair[ 4 ]\nPotencia [ 5 ]\nDobro [ 6 ]\nMetade [ 7 ]\nVezes_10 [ 8 ]\nVezes_100[ 9 ]\n");
    printf("");
    printf("Escolha uma opção: ");
    scanf("%d",&num);

    if(num >0 && num <=9){

      switch(num){

        case 1:
          printf("\n");
          printf("Digite dois numeros para fazer a soma entre eles!\n");
          printf("Primeiro numero: ");
          scanf("%lf", &soma_1);
          printf("Segundo numero: ");
          scanf("%lf", &soma_2);
          printf("Seu resultado da soma: %.2f \n",(soma_1 + soma_2));
          printf("\n");
          break;
        case 2:
          printf("\n");
          printf("Digite dois numeros para fazer a multiplicação entre eles!\n");
          printf("Primeiro numero: ");
          scanf("%lf", &multi_1);
          printf("Segundo numero: ");
          scanf("%lf", &multi_2);
          printf("Seu resultado da multiplicação: %.2f \n", (multi_1 * multi_2));
          printf("\n");
          break;
        case 3:
          printf("\n");
          printf("Digite dois numeros para fazer a divisão entre eles!\n");
          while(divi_1 == 0 || divi_2 == 0){
          printf("Primeiro numero: ");
          scanf("%lf", &divi_1);
          printf("Segundo numero: ");
          scanf("%lf", &divi_2);
          }printf("Seu resultado da divisão: %.2f\n",(divi_1/divi_2));
          printf("\n");
          divi_1 = 0;
          divi_2 = 0;
          break;
        case 4:
          printf("\n");
          printf("Digite dois numeros para fazer a subtração entre eles! \n");
          printf("Primeiro numero: ");
          scanf("%lf", &menos_1);
          printf("Segundo numero: ");
          scanf("%lf", &menos_2);
          printf("Seu resultador da subtração é: %.2f", (menos_1 - menos_2));
          printf("\n");
          menos_1 = 0;
          menos_2 = 0;
          break;
        case 5:
          printf("\n");
          printf("Digite dois numeros para fazer a potenciação entre eles! \n");
          printf("Primeiro numero, a base: ");
          scanf("%lf", &menos_1);
          printf("Segundo numero, expoente: ");
          scanf("%lf", &menos_2);
          potencia = pow(menos_1,menos_2);
          printf("Seu resultador da potenciação é: %.2f", potencia);
          printf("\n");
          break;
        case 6:
          printf("\n");
          printf("Digite um numero para saber o dobro! \n");
          printf("Primeiro numero: ");
          scanf("%lf", &menos_1);
          printf("Seu resultador  é: %.2f", (menos_1 *2 ));
          printf("\n");
          menos_1 = 0;
          break;
        case 7:
          printf("\n");
          printf("Digite um numero para saber a metade! \n");
          printf("Primeiro numero: ");
          scanf("%lf", &menos_1);
          printf("Seu resultador  é: %.2f", (menos_1 /2 ));
          printf("\n");
          menos_1 = 0;
          break;
        case 8:
          printf("\n");
          printf("Digite um numero para multiplicar por 10! \n");
          printf("Primeiro numero: ");
          scanf("%lf", &menos_1);
          printf("Seu resultador  é: %.2f", (menos_1 *10 ));
          printf("\n");
          menos_1 = 0;
          break;
        case 9:
          printf("\n");
          printf("Digite um numero para multiplicar por 100! \n");
          printf("Primeiro numero: ");
          scanf("%lf", &menos_1);
          printf("Seu resultador  é: %.2f", (menos_1 *100 ));
          printf("\n");
          menos_1 = 0;
          break;
        }
      }if(num == 0)
      {
        printf("XAUUU...");
        break;
      }
      }
  return 0;
}