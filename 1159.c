#include <stdio.h>
  
int main() {

 int x, soma, i;
     
    do{
      scanf("%d", &x);
        if(x == 0) 
          break;
          soma = 0;
                 
        if(x%2 == 0){
          soma += x;
        }else{
          soma += ++x;
        }
        for(i = 0; i < 4; i++){
            x += 2;
            soma += x;
        }
      printf("%d\n", soma);
    }while( x != 0);
 
    return 0;
}
