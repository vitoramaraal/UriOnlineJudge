#include <stdio.h>
  
int main() {
  
 float n1, n2, n3, n4, media, exame, mediafinal;
 
 scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
 
  media = (n1*0.2)+(n2*0.3)+(n3*0.4)+(n4*0.1);
 
   printf("Media: %.1f\n", media);

  if(media>=7)
     printf("Aluno aprovado.\n");
   else if(media<5)
      printf("Aluno reprovado.\n");
    else if(media>=5 && media <6.9){
        printf("Aluno em exame.\n");
          scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);     
          mediafinal = (media + exame)/2;
  
        if(mediafinal>=5){
           printf("Aluno aprovado.\n");
        }else{
         printf("Aluno reprovado.\n");
        }
      printf("Media final: %.1f\n", mediafinal); 
  }
    return 0;
}
