#include <stdio.h>
#include <locale.h>
int main(void) 
{
  setlocale(LC_ALL, "Portuguese");
  float n1, n2, n3, med, rec;
  
  printf("Digite a primera nota: ");
  scanf("%f",&n1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&n2);
  
  med=(n1+n2+n3)/3;
  printf ("Sua m�dia � %.2f",med);
  if (med>=7)  printf("\nAprovado");
  else {
         printf("\nDigite a nota da recupera��o: ");
         scanf("%f",&rec);
         if (rec>=5) printf("\nAprovado na recupera��o ");
         else printf("\nReprovado");
       }
  return 0;
}
