#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL ,"Portuguese");
	
	int pont;
	
	printf("Digite sua pontua��o: ");
	scanf("%d",&pont);
	
	if (pont<=30)
	printf("De acordo com a sua pontua��o, sua calssifica��o �: regular");
	
	else if (pont<=60)
	printf("De acordo com a sua pontua��o, sua calssifica��o �: bom");
	
	else if (pont<=90)
	printf("De acordo com a sua pontua��o, sua calssifica��o �: muito bom");
	
	else if (pont<=100)
	printf("De acordo com a sua pontua��o, sua calssifica��o �: �timo");
	
	else 
	printf("PONTUA��O INV�LIDA");
	
	
	
	
	
	

	return 0;
}
