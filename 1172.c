#include <stdio.h>
  
int main() {

    int x[10];
    int i;
 
    for(i = 0; i < 10; i ++){
        scanf("%d", &x[i]);
    }
    for(i = 0; i < 10; i++){
        if(x[i] <= 0){
            printf("X[%d] = %d\n", i, 1);   
        }else{
            printf("X[%d] = %d\n", i, x[i]);
        }
    }
    return 0;
}
