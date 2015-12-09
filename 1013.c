#include <stdio.h>
  
int main() {

 int a;
 int b;
 int c;
 int maiorab, maiortotal;
 
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
 
maiorab = (a+b+(abs(a-b)))/2;
maiortotal = (maiorab+c+(abs(maiorab-c)))/2;
 
 
printf("%d eh o maior\n", maiortotal);
    return 0;
}
