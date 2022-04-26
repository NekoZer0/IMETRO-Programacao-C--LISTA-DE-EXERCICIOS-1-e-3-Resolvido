/*

1. Escreva um programa para ler 2 valores e uma das seguintes opera��es a serem 
executadas:

1. Adi��o
2. Subtra��o
3. Divis�o
4. Multiplica��o

Em seguida o programa deve calcular e escrever o resultado da opera��o escolhida sobre 
os dois valores lidos

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() 
{	setlocale(LC_ALL,"PORTUGUESE");
	int sinalOperacao,opcao;
	float numeroA,numeroB;
	
	printf("Insira o primeiro numero: ");
	scanf("%f",&numeroA);
	printf ("Insira o segundo numero: ");
	scanf("%f",&numeroB);
		
	printf("\n\tEscolha o sinal da opera��o que deseja fazer: \n");
		printf("\t1. Soma\n");
		printf("\t2. Subitra��o\n");
		printf("\t3. Multiplica��o\n");
		printf("\t4. Divis�o\n");
	scanf("%d",&opcao);
			
	switch (opcao)
	{
	case 1:
		printf("Resultado = %.2f + %.2f = %.2f",numeroA,numeroB,numeroA+numeroB);
						
	break;
					
	case 2:
		printf("Resultado = %.2f - %.2f = %.2f",numeroA,numeroB,numeroA-numeroB);	
	break;
					
	case 3:
		printf("Resultado = %.2f * %.2f = %.2f",numeroA,numeroB,numeroA*numeroB);
	break;
					
	case 4:
		if (numeroB!=0)
		{
			printf("Resultado = %.2f / %.2f = %.2f",numeroA,numeroB,numeroA/numeroB);
		} 
		else 
		{
			printf("\nO divisor deve ser diferente de 0");
		}
	break;
					
	default: printf("\n\nEscolha apenas numero\nPorfavor...");
	}
		
	return 0;
}
