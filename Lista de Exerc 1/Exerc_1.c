/* 

1. Escreva um programa em C que efetue a multiplica��o de dois n�meros inteiros e mostre 
o resultado.

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{ 	setlocale(LC_ALL, "PORTUGUESE");
	
	int numeroA, numeroB;
	
	printf("\nInsira o valor de A de Seguida o Valor de B: ");
	scanf("%d%d",&numeroA,&numeroB);
	printf("\nA Multiplica��o de %d * %d = %d",numeroA,numeroB,numeroA*numeroB);
	
	return 0;
}
