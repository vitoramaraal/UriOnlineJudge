#include <stdio.h>
  
int main() {

  int x;
  float nota1 = 0;
  float nota2 = 0;
  float media;
 
do{
     
    do{
        scanf("%f", &nota1);
         
        if(nota1 < 0 || nota1>10){
          printf("nota invalida\n");
        }
 
    }while(nota1<0 || nota1>10);
     
  do{
     
    scanf("%f", &nota2);
     
     if(nota2 < 0 || nota2>10){
       printf("nota invalida\n"); 
     }
 
  }while(nota2<0 || nota2>10);
   
  media = (nota1 + nota2)/2;
  printf("media = %.2f\n", media);  
 
  x=0;
   
  while(x != 1 && x != 2){
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &x);
  }   
   
}while (x == 1);
    return 0;
}
