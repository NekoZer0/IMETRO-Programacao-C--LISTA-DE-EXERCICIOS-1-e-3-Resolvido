
/*

2. Escreva um programa que leia as medidas dos lados de um tri�ngulo e escreva se ele � 
equil�tero, is�sceles ou escaleno. Sendo que:

? Tri�ngulo Equil�tero: possui os 3 lados iguais.
? Tri�ngulo Is�sceles: possui 2 lados iguais.
? Tri�ngulo Escaleno: possui 3 lados diferentes 

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	setlocale(LC_ALL,"PORTUGUESE");
	float ladoA, ladoB, ladoC;
	
	printf("Insira os valores do lado A, B, C (cm): ");
	scanf("%f%f%f",&ladoA,&ladoB,&ladoC);
	
	if (ladoB+ladoA>ladoC && ladoC+ladoA>ladoB && ladoC+ladoB>ladoA )
	{
		if (ladoA==ladoB && ladoA==ladoC)
		{
			printf("Equilatero");	
		}
		else if (ladoA==ladoB || ladoA==ladoC || ladoB==ladoC)
		{
			printf("Isosceles");	
		}
		else if (ladoA!=ladoB && ladoA!=ladoC && ladoB!=ladoC )
		{
			printf("Escaleno");	
		}	
	} 
	else 
	{
		printf("Esses dados ensirido n�o formam um triangulo...");
	}
	
	return 0;
}
