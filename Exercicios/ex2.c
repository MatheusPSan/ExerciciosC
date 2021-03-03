//Faça um programa em C que leia dois números inteiros. 
//Informe se os números são iguais ou, caso não sejam,exiba-os em ordem crescente

#include <stdio.h> //std standard input output
#include <locale.h>

 int main (void) 
 {
 	
 	setlocale (LC_ALL,"Portuguese");
 	int n1, n2;
 	
 	printf("Digite o primeiro numero: ");
 	scanf("%d",&n1);
 	
 	printf("Digite o segundo numero: ");
 	scanf("%d",&n2);
 	
 	if (n1>n2) printf("\nOrdem crescente: %d, %d",n1, n2);
 	else if (n2>n1) printf("\nOrdem crescente: %d, %d",n2, n1);
 		else printf("\nSÃO IGUAIS");
	
 	
 	return 0;
 }
