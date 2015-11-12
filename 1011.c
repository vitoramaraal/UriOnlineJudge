//Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). 
//A fórmula para calcular o volume é: (4/3) * pi * R3.
//Considere (atribua) para pi o valor 3.14159.
//Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++),
//assumem que o resultado da divisão entre dois inteiros é outro inteiro.


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

//Declaração das Variaveis
double pi = 3.14159;
double raio;
double volume;

// Pede ao usuario digitar o valor do raio
scanf("%lf", &raio);

// Cálculo do volume
volume = (4.0/3) * 3.14159 * (raio * raio * raio);

//Saida com o resultado do cálculo de volume
printf("VOLUME = %.3lf\n", volume);
}
