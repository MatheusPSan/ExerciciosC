#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale (LC_ALL,"Portuguese");
	float peso, alt, imc;
	printf("Digite sua peso: ");
	scanf("%f",&peso);
	
	printf("Digite sua altura: ");
	scanf("%f",&alt);
	
	imc = peso/(alt*alt);
	
	if (imc <= 18.5) printf ("\nMagro");
	else if (imc < 25) printf("\nNORMAL");
	else if (imc < 30) printf("\nUM TIQUINHO ACIMA DO PESO");
	else printf ("\nOBESO");
	
	return 0;
}
