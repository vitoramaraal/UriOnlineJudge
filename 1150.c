#include <stdio.h>
  
int main() {

 int x; 
 int s = 0;
 int z;
 int n = 0;
 int cont;
     
    scanf("%d", &x);
 
    do{
     scanf("%d", &z);    
    }while (z <= x);
     
    for (cont = x; s <= z; cont++){
        s += x++;
        n++;
    }
 
    printf("%d\n", n);
    return 0;
}
