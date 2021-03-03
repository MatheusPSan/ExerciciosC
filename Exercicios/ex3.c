#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL ,"Portuguese");
	
	float salario;
	
	printf("Digite seu salário: ");
	scanf("%f", &salario);
	
	if(salario<=2000) 
	salario= salario+(salario*0.5), 
	printf("Seu salário atual com reajuste é de: %.2f", salario);
	
	else if(salario<5000)
	salario=salario+ (salario*0.2),
	printf("Seu salário atual com reajuste é de: %.2f", salario);
	
	else 
	salario=salario+ (salario*0.1),
	printf("Seu salário atual com reajuste é de: %.2f", salario);
	
	return 0;
}
