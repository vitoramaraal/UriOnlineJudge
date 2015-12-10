#include <stdio.h>
  
int main() {

 int N,X,cont,i,j=0;
    
    scanf("%d",&N);
    
    while(j<N){
        
        scanf("%d",&X);
        cont=0;
        
        if(X==1){
          printf("%d nao eh primo\n", X);
        }else{
            for(i=1;i<X+1;i++){
                if(X%i==0){
                    cont++;
                }
            }
          if(cont>2){
            printf("%d nao eh primo\n", X);
          }else{
            printf("%d eh primo\n", X);
          }
        }
        j++;
    }
    return 0;
}
