#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
;

	printf("Digite o número do mês: ");
	scanf("%d",&num);
	
	switch (num)
	{
		case 	1:	printf("De acordo com o número, o mês é Janeiro"); break;
		case	2:	printf("De acordo com o número, o mês é Fevereiro"); break;
		case	3:	printf("De acordo com o número, o mês é Março"); break;
		case	4:	printf("De acordo com o número, o mês é Abril"); break;
		case	5:	printf("De acordo com o número, o mês é Maio"); break;
		case	6:	printf("De acordo com o número, o mês é Junho"); break;
		case	7:	printf("De acordo com o número, o mês é Julho"); break;
		case	8:	printf("De acordo com o número, o mês é Agosto"); break;
		case	9:	printf("De acordo com o número, o mês é Setembro"); break;
		case	10:	printf("De acordo com o número, o mês é Outubro"); break;
		case	11:	printf("De acordo com o número, o mês é Novembro"); break;
		case	12:	printf("De acordo com o número, o mês é Dezembro"); break;
		default:	printf("Mês Iválido");
	}
	 
	getch();    
	return 0;
}
