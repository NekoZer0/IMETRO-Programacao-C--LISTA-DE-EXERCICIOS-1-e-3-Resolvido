
/* 

6. Escreva um programa em que leia três valores e apresente-os na tela em ordem crescente

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL,"PORTUGUESE");
	float valorA,valorB,valorC;
	
	printf("Insira o primeiro valor: ");
	scanf("%f",&valorA);
	printf("Insira o segundo valor: ");
	scanf("%f",&valorB);
	printf("Insira o Terceiro valor: ");
	scanf("%f",&valorC);
	
	if (valorA<valorB && valorB<valorC)
	{
		printf("\nOrdem crescente: %.2f %.2f %.2f",valorA,valorB,valorC);
	}
	else if (valorA<valorC && valorC<valorB)
	{
		printf("\nOrdem crescente: %.2f %.2f %.2f",valorA,valorC,valorB);	
	}
	else if (valorB<valorA && valorA<valorC)
	{
		printf("\nOrdem crescente: %.2f %.2f %.2f",valorB,valorA,valorC);	
	}
	else if (valorB<valorC && valorC<valorA)
	{
		printf("\nOrdem crescente: %.2f %.2f %.2f",valorB,valorC,valorA);	
	}
	else if (valorC<valorA && valorA<valorB)
	{
		printf("\nOrdem crescente: %.2f %.2f %.2f",valorC,valorA,valorB);	
	}
	else 
	{
		printf("\nOrdem crescente: %.2f %.2f %.2f",valorC,valorB,valorA);	
	}
	
	return 0;
}
