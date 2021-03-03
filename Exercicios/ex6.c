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
  printf ("Sua média é %.2f",med);
  if (med>=7)  printf("\nAprovado");
  else {
         printf("\nDigite a nota da recuperação: ");
         scanf("%f",&rec);
         if (rec>=5) printf("\nAprovado na recuperação ");
         else printf("\nReprovado");
       }
  return 0;
}
