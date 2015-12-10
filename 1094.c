#include <stdio.h>
  
int main() {

  int n;
  int q;
  char t;
  int total = 0;
  int coelho = 0;
  int sapo = 0;
  int rato = 0;
  int i;
  float percentual_coelho;
  float percentual_rato;
  float percentual_sapo;
     
    scanf("%d", &n);
     
    for(i = 0; i < n; i++){
      scanf("%d", &q);
      scanf(" %c", &t);
                   
      total += q;
             
      if(t == 'C'){
      coelho += q;
      }
      if(t == 'S'){ 
      sapo += q;
      }
      if(t == 'R'){ 
      rato += q;
      }
    }
     
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
     
    percentual_coelho = ((float) coelho/ (float) total) * 100.00;
    percentual_rato = ((float) rato/ (float) total) * 100.00;
    percentual_sapo = ((float) sapo/ (float) total) * 100.00;
     
     
    printf("Percentual de coelhos: %.2f %%\n", percentual_coelho);
    printf("Percentual de ratos: %.2f %%\n", percentual_rato);
    printf("Percentual de sapos: %.2f %%\n", percentual_sapo);
 
    return 0;
}
