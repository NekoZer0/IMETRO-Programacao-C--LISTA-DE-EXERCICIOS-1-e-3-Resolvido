
/* 

4. Fa�a um programa em C que calcule e mostre a �rea (base * altura) e o per�metro (2 * ( base + altura)) de uma sala
retangular cujas medidas s�o fornecidas pelo usu�rio.

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"PORTUGUESE");
	float base, altura;
	
	printf("\nInsira o valor da base (m): ");
	scanf("%f",&base);
	printf("Insira o valor da Altura (m): ");
	scanf("%f",&altura);
	
	printf("\nArea = (%.2f * %.2f) = %.2f metros\n",base,altura,base*altura);
	printf("\nPerimetro (2 * ( %.2f + %.2f)) = %.2f metros \n", base,altura,2*(base+altura));
		
	return 0;
}
