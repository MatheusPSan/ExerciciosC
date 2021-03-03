#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL ,"Portuguese");
	
	int sexo;
	float altura, formula;
	
	printf("Indetifique seu sexo com numero 1 para HOMEM ou numero 2 para MULHER: ");
	scanf("%d",&sexo);
	
	printf("Digite aqui sua altura: ");
	scanf("%f",&altura);

	
	if (sexo == 1)
	formula = (72.7*altura)-58,
	printf("Seu peso ideal é: %f", formula);
	
	else if(sexo == 2)
	formula =(62.1*altura)-44.7,
	printf("Seu peso ideal é: %.2f", formula);
	
	else
	printf("\nInformação invalida");
	
		return 0;
}
