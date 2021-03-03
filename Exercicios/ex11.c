#include <stdio.h>

#include <stdlib.h>

int main(int argc, char *argv[])

{

    int valor;

    int M100, M50, M10, M5, M1;

    printf("Digite o Valor: ");
    scanf("%d",&valor);

    M100 = valor/100;
    valor = valor%100; 

    M50 = valor/50; 
    valor = valor%50; 

    M10 = valor/10; 
    valor = valor%10;
	
	M5 = valor/5;
    valor = valor%5;
     
	M1 = valor/1; 
    valor = valor%1;
    
    printf("\n%d Moeda de 100 ",M100);  

    printf("\n%d Moeda de 50 ",M50);

    printf("\n%d Moeda de 10 ",M10);

    printf("\n%d Moeda de 5 ",M5);

    printf("\n%d Moeda de 1 ",M1); 
    
  return 0;

}
