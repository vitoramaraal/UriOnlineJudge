//Leia 2 valores inteiros e armazene-os nas variáveis A e B.
//Efetue a soma de A e B atribuindo o seu resultado na variável X. 
//Imprima X conforme exemplo apresentado abaixo. 
//Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha 
//após o resultado, caso contrário, você receberá "Presentation Error".

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
      setlocale(LC_ALL, "portuguese");

int A, B, X;

scanf("%d", &A);
scanf("%d", &B);

X = A+B;
printf("X = %d\n", X);

return 0;
}
