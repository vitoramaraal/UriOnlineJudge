#include <stdio.h>
  
int main() {

 int numero, qtdhrstrab;
 float valorhora, salario;

  scanf("%d", &numero);
  scanf("%d", &qtdhrstrab);
  scanf("%f", &valorhora);

salario = (qtdhrstrab * valorhora);

 printf("NUMBER = %d\n", numero);
 printf("SALARY = U$ %0.2f\n", salario);
 
    return 0;
}
