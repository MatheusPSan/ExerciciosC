//Fa�a um programa em C que leia dois n�meros inteiros. 
//Informe se os n�meros s�o iguais ou, caso n�o sejam,exiba-os em ordem crescente

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
 		else printf("\nS�O IGUAIS");
	
 	
 	return 0;
 }
