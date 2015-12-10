#include <stdio.h>
  
int main() {

int num, pot, i;    

scanf("%d", &num);

 for(i=2; i <= num; i+=2){
   pot = pow(i, 2);
   printf("%d^2 = %d\n", i, pot);
  }
    return 0;
}
