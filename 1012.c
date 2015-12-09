#include <stdio.h>
  
int main() {

 double a, b, c;
 float areatri, areacirc, areatra, areaqua, arearet;
 float pi = 3.14159;
 
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
 
   areatri = (a*c)/2;
   areacirc = ((c*c)*pi);
   areatra = ((a+b)*c)/2;
   areaqua = (b*b);
   arearet = (a*b);
 
 
printf("TRIANGULO: %0.3f\n", areatri);
printf("CIRCULO: %0.3f\n", areacirc);
printf("TRAPEZIO: %0.3f\n", areatra);
printf("QUADRADO: %0.3f\n", areaqua);
printf("RETANGULO: %0.3f\n", arearet);
    return 0;
}
