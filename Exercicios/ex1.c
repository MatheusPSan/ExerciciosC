//Fa�a um programa em Cque pe�a para o usu�rio digitaro sal�rioe o total gastono m�s.

#include <stdio.h> //std standard input output
#include <locale.h>

 int main (void) 
 {
 	
 	setlocale (LC_ALL,"Portuguese");
 	float sal, gasto,result;
 	
 	printf("Digite seu sal�rio: ");
 	scanf("%f",&sal);
 	
 	printf("Digite o valor gasto no m�s: ");
 	scanf("%f",&gasto);
	
	result= sal-gasto;
	
	printf("Seu saldo atual � %.2f", result);
	
	if(result > 0) printf("\nSALDO POSITIVO, EST� DENTRO DO OR�AMENTO");
	else printf("\nSALDO NEGATIVO, FORA DO OR�AMENTO");
	
	
 	
 	return 0;
 }
