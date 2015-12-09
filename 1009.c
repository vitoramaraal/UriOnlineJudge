#include <stdio.h>
  
int main() {

 char nome[100];
 double vendas;
 double fixo;
 double gasto;
 
 scanf(" %s", nome);
 scanf("%lf", &fixo);
 scanf("%lf", &vendas);

gasto = (fixo + (vendas * 0.15));

printf("TOTAL = R$ %0.2lf\n",  gasto);
 
    return 0;
}
