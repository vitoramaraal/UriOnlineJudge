#include <stdio.h>
  
int main() {

 int numero;
 int notas100;
 int notas50;
 int notas20;
 int notas10;
 int notas5;
 int notas2;
 int notas1;
 
  scanf("%d", &numero);
 
   notas100 = numero/100;
   notas50 = (numero % 100)/50;
   notas20 = ((numero % 100) % 50)/20; 
   notas10 = (((numero % 100) % 50) % 20)/10;
   notas5 = ((((numero %100)%50)%20)%10)/5;
   notas2 = (((((numero %100)%50)%20)%10)%5)/2;
   notas1 = ((((((numero %100)%50)%20)%10)%5)%2)/1;
 
  printf("%d\n", numero);
  printf("%d nota(s) de R$ 100,00\n", notas100);
  printf("%d nota(s) de R$ 50,00\n", notas50);
  printf("%d nota(s) de R$ 20,00\n", notas20);
  printf("%d nota(s) de R$ 10,00\n", notas10);
  printf("%d nota(s) de R$ 5,00\n", notas5);
  printf("%d nota(s) de R$ 2,00\n", notas2);
  printf("%d nota(s) de R$ 1,00\n", notas1);
    return 0;
}
