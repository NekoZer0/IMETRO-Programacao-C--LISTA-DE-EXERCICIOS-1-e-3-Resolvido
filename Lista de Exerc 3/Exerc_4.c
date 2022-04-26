/*

4. Para viajar na classe econ�mica de uma empresa a�rea, cada passageiro est� sujeito �s 
seguintes regras ao despachar a sua bagagem:

	? � poss�vel despachar somente 1 volume;
	? O volume n�o deve pesar mais do que 15 kg;
	? A dimens�o linear do volume (soma da altura, largura e comprimento) n�o deve 
	exceder 158 cm;

Escreva um programa para verificar se o passageiro est� respeitado as regras do despacho 
de bagagens. 

O programa deve exibir uma mensagem indicando sempre que o passageiro 
desrespeitar cada uma das regras acima. 

No caso do passageiro tentar despachar mais de 
1 volume, n�o � necess�rio realizar mais nenhum teste, bastando imprimir a mensagem 
n�o adequada. Caso nenhuma regra seja desrespeitada, nenhuma mensagem ser� exibida.

As informa��es fornecidas pelos passageiros s�o:
? Quantidade de volumes;
? Peso do volume;
? Altura do volume (C, na figura ao lado);
? Largura do volume (B, na figura);
? Comprimento do volume (A, na figura)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	setlocale(LC_ALL,"PORTUGUESE");
	int quantidadeV;
	float pesoV,alturaV,larguraV,comprimentoV,resultadoV;
	
	printf("Insira o quantidade de Volume que deseja carregar: ");
	scanf ("%d",&quantidadeV);
	printf("Insira o Peso do Volume: (Kg) ");
	scanf ("%f",&pesoV);
	printf("Insira a altura do Volume (C): ");
	scanf("%f",&alturaV);
	printf("Insira a Largura do Volume (B): ");
	scanf ("%f",&larguraV);
	printf("Insira o comprimento do Volume (A): ");
	scanf("%f",&comprimentoV);

	
	if (quantidadeV==0)
	{
		printf("\n\nTenha uma boa viagem");
	}
	else if (quantidadeV>1)
	{  	
		printf ("\nN�o adequada");
	}
	else if (quantidadeV==1)
	{	
		if (pesoV>15)
		{ 
		 	printf ("\nN�o adequada");
		}
		else if (pesoV<=15)
		{
			resultadoV=alturaV*larguraV*comprimentoV;
			
		 	if (resultadoV>158)
			{ 
		 	printf ("\nN�o adequada");
			}
			else if (resultadoV<=158)
			{
				printf("\n\nTenha uma boa viagem");	
			}
		}		  
	}
	
	return 0;
}
