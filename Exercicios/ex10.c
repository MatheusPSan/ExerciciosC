#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
;

	printf("Digite o n�mero do m�s: ");
	scanf("%d",&num);
	
	switch (num)
	{
		case 	1:	printf("De acordo com o n�mero, o m�s � Janeiro"); break;
		case	2:	printf("De acordo com o n�mero, o m�s � Fevereiro"); break;
		case	3:	printf("De acordo com o n�mero, o m�s � Mar�o"); break;
		case	4:	printf("De acordo com o n�mero, o m�s � Abril"); break;
		case	5:	printf("De acordo com o n�mero, o m�s � Maio"); break;
		case	6:	printf("De acordo com o n�mero, o m�s � Junho"); break;
		case	7:	printf("De acordo com o n�mero, o m�s � Julho"); break;
		case	8:	printf("De acordo com o n�mero, o m�s � Agosto"); break;
		case	9:	printf("De acordo com o n�mero, o m�s � Setembro"); break;
		case	10:	printf("De acordo com o n�mero, o m�s � Outubro"); break;
		case	11:	printf("De acordo com o n�mero, o m�s � Novembro"); break;
		case	12:	printf("De acordo com o n�mero, o m�s � Dezembro"); break;
		default:	printf("M�s Iv�lido");
	}
	 
	getch();    
	return 0;
}
