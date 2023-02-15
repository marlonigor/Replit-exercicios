
#include <stdio.h>

//Neste código, teremos uma conta de restaurante e a dividiremos por 2 no final. Na conta, também incluiremos uma taxa de impostos e uma de gorjeta.

//Essa função garantirá que os valores de entrada sejam sempre positivos
int validacaoEntrada(double *value){
  if (*value<=0){
    printf("Entrada inválida. Por favor, insira um valor maior do que zero: \n");
    return 0;
  }
  return 1;
  
}

//Essa função converte as taxas de impostos e de gorjetas em decimais e retorna a soma entre elas 
double taxas(double p1, double p2){
  double taxpercents = (p1/100) + (p2/100);
  return taxpercents;
}

int main(void) {

  double bill, tax, tip;
  
  //Graças ao loop while e a função validacaoEntrada, o programa sempre vai pedir um valor até que seja inserido um valor válido, ou seja, maior do que zero
  printf("Bill: \n");
  scanf("%lf", &bill);
  while(validacaoEntrada(&bill)){
  scanf("%lf", &bill);
}
  printf("Tax: \n");
  scanf("%lf", &tax);
  while(validacaoEntrada(&tax)){
  scanf("%lf", &tax);
}
  printf("Tip: \n");
  scanf("%lf", &tip);
  while(validacaoEntrada(&tip)){
  scanf("%lf", &tip);
}

  printf("Bill before tax and tip: %.3lf\n", bill);

  printf("Sale Tax Percent: %.3lf\n", tax);

  printf("Tip percent: %.3lf\n", tip);

  double total = taxas(tax, tip);
  double total_due = bill + (bill * total);
  
  printf("You will owe $%lf\neach", total_due/2);

  return 0;
}