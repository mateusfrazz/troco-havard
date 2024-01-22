#include <stdio.h>
#include <stdlib.h>

int main(void){
  float valor_devido, valor_pago, troco;
  int moedas_25=0, moedas_10=0, moedas_5=0, moedas_1=0;

  printf("Digite o valor devido:");
  scanf("%f", &valor_devido);

  printf("Digite o valor Pago:");
  scanf("%f", &valor_pago);

  troco = valor_pago - valor_devido;

  while(troco >0){
    if (troco >= 0.25){
      troco -= 0.25;
      moedas_25++;
    }else if ( troco >= 0.10){
      troco -= 0.10;
      moedas_10++;	
    }else if ( troco >= 0.05){
      troco -= 0.05;
      moedas_5++;
    }else {
      troco -= 0.01;
      moedas_1++;
    }
    printf("O número de moedas necessárias para pagar o troco é:\n");
    printf("- %d moedas de 25 centavos\n", moedas_25);
    printf("- %d moedas de 10 centavos\n", moedas_10);
    printf("- %d moedas de 5 centavos\n", moedas_5);
    printf("- %d moedas de 1 centavo\n", moedas_1);
  }
   return 0;
}