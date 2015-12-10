#include <stdio.h>
  
int main() {

 int n;
 int menor = 0;
 int posicao = 0;
 int cont;
 
  scanf("%d", &n);
   
  int x[n];
 
  for (cont = 0; cont < n; cont++){
     
    scanf("%d", &x[cont]);
  }
 
   menor = x[0];
 
  for (cont = 0; cont < (n); cont++){
     
     if (menor > x[cont]){
        menor = x[cont]; 
        posicao = cont;
 
     }
 
  }  
 
printf("Menor valor: %d\n", menor);
printf("Posicao: %d\n", posicao);

    return 0;
}
