//A fórmula para calcular a área de uma circunferência é: area = π . raio2. 
//Considerando que para este problema que π = 3.14159:
//Efetue o cálculo da área, elevando o valor de Raio ao quadrado e multiplicando por π.


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
      setlocale(LC_ALL, "portuguese");

double raio;
double pi = 3.14159;
double area;

scanf("%lf", &raio);

area = (raio*raio)*pi;
printf("A=%0.4lf\n", area);
}
