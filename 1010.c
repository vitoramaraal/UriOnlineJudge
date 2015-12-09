#include <stdio.h>
  
int main() {

 int codigopeca1, codigopeca2, qtdpeca1, qtdpeca2;
 float valorpeca1, valorpeca2, total;
 
  scanf("%d %d %f", &codigopeca1, &qtdpeca1, &valorpeca1);
  scanf("%d %d %f", &codigopeca2, &qtdpeca2, &valorpeca2);
 
 total = (valorpeca1*qtdpeca1) + (valorpeca2*qtdpeca2);
 
 printf("VALOR A PAGAR: R$ %0.2f\n", total);
    return 0;
}
