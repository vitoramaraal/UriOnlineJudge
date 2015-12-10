#include <stdio.h>
  
int main() {

 float num1;
 float num2;
 float num3;
 float media;
 int n;
 int cont;
 
   scanf("%d", &n);
 
  for (cont = 0; cont < n ; cont++){
    scanf("%f", & num1);
    scanf("%f", & num2);
    scanf("%f", & num3);
 
     media = (num1 * 2 + num2 * 3 + num3 * 5)/(2 + 3 + 5);
 
     printf("%.1f\n", media);
 
   }
    return 0;
}
