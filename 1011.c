#include <stdio.h>
  
int main() {

 double pi = 3.14159;
 double raio;
 double volume;
 
  scanf("%lf", &raio);
 
 
 volume = (4.0/3) * 3.14159 * (raio * raio * raio);
 
 printf("VOLUME = %.3lf\n", volume);
    return 0;
}
