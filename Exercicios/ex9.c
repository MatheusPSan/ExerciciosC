#include <stdio.h>
#include <locale.h>

int main(void){ 

setlocale(LC_ALL,"Portuguese");

float x, y;

printf ("Digite o valor de x: ");
scanf ("%f",&x);

printf ("Digite o valor de y: ");
scanf ("%f",&y); 

if ((x==0)&&(y==0)) printf ("ORIGEM"); 
	else if ((x>0)&&(y>0)) printf ("1� Quadrante"); 
	else if ((x<0)&&(y>0)) printf ("2� Quadrante"); 
	else if ((x<0)&&(y<0)) printf ("3� Quadrante"); 
	else if ((x>0)&&(y<0)) printf ("4� Quadrante"); 
	else if ((x==0)&&(y!=0)) printf ("Eixo Y"); 
	else printf ("Eixo X");

return 0;
}
