#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL ,"Portuguese");
	
	int time1, time2;
	
	printf("Quantos gols a UNICID fez?: ");
	scanf("%d", &time1);
	
	printf("Quantos gols o time visitante fez?: ");
	scanf("%d", &time2);
	
	
	if (time1==time2) 
	printf ("EMPATE");
	
	else if (time1>time2) 
	printf ("UNICID saiu como a equipe vitoriosa!");
	
	else 
	printf	("UNICID saiu como a equipe perdedora :(");

	return 0;
}
	
