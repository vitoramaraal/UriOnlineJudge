#include <stdio.h>
  
int main() {

 int tempo, velocidade; 
 double gasto, distancia;
  
  scanf("%d", &tempo);
  scanf("%d", &velocidade);
  
distancia = tempo * velocidade;
gasto = distancia / 12;
  
printf("%.3lf\n", gasto);
    return 0;
}
