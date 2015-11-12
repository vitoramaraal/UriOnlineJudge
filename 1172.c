//Faça um programa que leia um vetor X[10]. 
//Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. 
//Em seguida mostre o vetor X.

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  
int x[10];
int i;

 for(i = 0; i < 10; i ++){
  scanf("%d", &x[i]);
 }
  
 for(i = 0; i < 10; i++){
  if(x[i] <= 0){
    printf("X[%d] = %d\n", i, 1);
   }else{
    printf("X[%d] = %d\n", i, x[i]);
     }
 }
} 
