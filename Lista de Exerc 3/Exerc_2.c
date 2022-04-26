
/*

2. Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é 
equilátero, isósceles ou escaleno. Sendo que:

? Triângulo Equilátero: possui os 3 lados iguais.
? Triângulo Isósceles: possui 2 lados iguais.
? Triângulo Escaleno: possui 3 lados diferentes 

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
		printf("Esses dados ensirido não formam um triangulo...");
	}
	
	return 0;
}
