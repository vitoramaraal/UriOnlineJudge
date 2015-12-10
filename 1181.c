#include <stdio.h>
  
int main() {

  int X, col, lin;
    double M[12][12], s = 0, m = 0;
    char op;
 
    scanf("%d ", &X);
    scanf("%c", &op);
 
    if(X < 0 || X > 11){
        printf("0.0\n");
    }else{
 
        for(lin = 0; lin <= 11; lin++){
           for(col = 0; col <= 11; col++){
              scanf("%lf", &M[lin][col]);
              if(lin == X){
                if(op == 'S'){
                  s = s + M[lin][col];
                }else if(op == 'M'){
                  m = m + M[lin][col];
                }
              }
 
           }
        }
 
 
          m = m / 12;
 
        if(op == 'S'){
          printf("%.1lf\n", s);
        }else if(op == 'M'){
           printf("%.1lf\n", m);
        }
    }
 
    return 0;
}
