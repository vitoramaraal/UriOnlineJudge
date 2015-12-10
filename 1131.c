#include <stdio.h>
  
int main() {

 int qtd = 0;
 int gremio, inter;
    gremio = 0;
    inter = 0;
 int resp;
 int golsg, golsi;
 
    do{
    
     scanf("%d %d", &golsg, &golsi);
      qtd++;
     
     if(golsi > golsg){
        gremio++;
     } 
    
     if (golsg > golsi){
        inter++;
     }
    
     printf("Novo grenal (1-sim 2-nao)\n");
      scanf("%d", &resp);
    
    }while(resp == 1);
 
  printf("%d grenais\n", qtd);
  printf("Inter:%d\n", inter);
  printf("Gremio:%d\n", gremio);
  printf("Empates:%d\n", qtd-(gremio + inter));
     
    if (gremio > inter){
        printf("Gremio venceu mais\n");
 
    }else if ( inter > gremio){
        printf("Inter venceu mais\n");
       }else{
          printf("Nao houve vencedor\n");
    }    
    return 0;
}
