
/* 

5. Escreva um programa que implemente o jogo conhecido como pedra, papel, tesoura. 
Neste jogo, o usuário e o computador escolhem entre pedra, papel ou tesoura.

Sabendo que pedra ganha de tesoura, papel ganha de pedra e tesoura ganha de papel, exiba na tela 
o ganhador: usuário ou computador. Para esta implementação, assuma que o número 0 
representa pedra, 1 representa papel e 2 representa tesoura.

Para sortear a jogada do computador utilize a função int rand (void); da 
biblioteca stdlib.h. A função rand retorna um número aleatório em um determinado 
intervalo. Exemplo:
 x = rand() % 100; x vai receber um valor entre 0 e 100 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	int usuario, escolha;
	float computador;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escolha a sua opção:\n ");
	printf("\t1. Pedra\n\t2. Papel\n\t3. Tesoura\n");
	scanf("%d",&usuario);
	
	escolha=rand() %100;  
	printf("\n\n%d\n",escolha);
	
	if (escolha>=0 && escolha <=33) 
	{
		computador=1; // Pedra
	}
	else if (escolha>33 && escolha <=66) 
	{
		computador=2; // Papel
	}	
	else if (escolha>66 && escolha <=100) 
	{
		computador=3; // Tesoura
	}
	
	if (computador==usuario)
	{
		printf("Empate");
	}
	else if ((computador==1 && usuario==3) || (computador==3 && usuario==2) || (computador==2 && usuario==1)) 
	{
		printf("Compurador ganhou");
	}
	else if ((usuario==1 && computador==3) || (usuario==3 && computador==2) || (usuario==2 && computador==1)) 
	{
		printf("Você ganhou");
	}
		
	
	return 0;
}
