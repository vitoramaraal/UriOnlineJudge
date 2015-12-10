#include <stdio.h>
  
int main() {

 int numeroDaSeq, v, cont, seqFib, l;
 
  v = 1;
  l = 0;
 
  scanf("%d", &numeroDaSeq);
  printf("0");

   for(cont = 1; cont < numeroDaSeq; cont++){
     seqFib = v + l;
     v = l;
     l = seqFib;
     printf(" %d", seqFib);  
   }
   
  printf("\n");
 
    return 0;
}
