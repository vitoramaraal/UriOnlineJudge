#include <stdio.h>
  
int main() {

 int n, i, k = 1;
   scanf("%d", &n);
 
  for(i=1; i <= n; i++){
    printf("%d ", k++);
    printf("%d ", k++);
    printf("%d ", k++);
      k++;
    printf("PUM\n");
  }
    return 0;
}
