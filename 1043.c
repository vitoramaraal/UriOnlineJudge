#include <stdio.h>
  
int main() {

  float A, B, C;
  float perimetro, areatra;
         
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
         
         
 if ((A < B + C) && (B < A + C) && (C < A + B)){
    perimetro = (A + B + C);
    printf("Perimetro = %0.1f\n", perimetro);
  }else{
    areatra = (((A + B)*C)/2);
    printf("Area = %0.1f\n", areatra);  
  }       
    return 0;
}
