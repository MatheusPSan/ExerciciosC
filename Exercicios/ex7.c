#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL ,"Portuguese");
	
	int pont;
	
	printf("Digite sua pontuação: ");
	scanf("%d",&pont);
	
	if (pont<=30)
	printf("De acordo com a sua pontuação, sua calssificação é: regular");
	
	else if (pont<=60)
	printf("De acordo com a sua pontuação, sua calssificação é: bom");
	
	else if (pont<=90)
	printf("De acordo com a sua pontuação, sua calssificação é: muito bom");
	
	else if (pont<=100)
	printf("De acordo com a sua pontuação, sua calssificação é: ótimo");
	
	else 
	printf("PONTUAÇÃO INVÁLIDA");
	
	
	
	
	
	

	return 0;
}
