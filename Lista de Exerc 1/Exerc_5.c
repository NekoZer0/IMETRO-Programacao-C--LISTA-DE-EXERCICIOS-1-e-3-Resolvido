
/* 

5. Elabore um programa em C que calcule a �rea de um c�rculo (�rea = pi * r^2)

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"PORTUGUESE");
	float areaCirculo,raio;
	
	printf("Insira o valor do raio (Cm): ");
	scanf("%f",&raio);
	
	areaCirculo=3.14*pow(raio,2);
	
	printf("\n�rea do Circulo = (�rea = pi * r^2)= %.2f Cm",areaCirculo);

	return 0;
}
