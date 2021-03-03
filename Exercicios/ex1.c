//Faça um programa em Cque peça para o usuário digitaro salárioe o total gastono mês.

#include <stdio.h> //std standard input output
#include <locale.h>

 int main (void) 
 {
 	
 	setlocale (LC_ALL,"Portuguese");
 	float sal, gasto,result;
 	
 	printf("Digite seu salário: ");
 	scanf("%f",&sal);
 	
 	printf("Digite o valor gasto no mês: ");
 	scanf("%f",&gasto);
	
	result= sal-gasto;
	
	printf("Seu saldo atual é %.2f", result);
	
	if(result > 0) printf("\nSALDO POSITIVO, ESTÁ DENTRO DO ORÇAMENTO");
	else printf("\nSALDO NEGATIVO, FORA DO ORÇAMENTO");
	
	
 	
 	return 0;
 }
