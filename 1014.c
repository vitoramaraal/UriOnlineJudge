#include <stdio.h>
  
int main() {

 int distancia;
 float combustivelgasto;
 float consumomedio;
 
  scanf("%d", &distancia);
  scanf("%f", &combustivelgasto);
 
consumomedio = distancia/combustivelgasto;
 
printf("%.3f km/l\n", consumomedio);
    return 0;
}
