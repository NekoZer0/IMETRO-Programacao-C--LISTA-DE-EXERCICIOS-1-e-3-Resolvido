
/*

3. Escreva um programa em C que aplique um desconto de 25% sobre o preço de um 
produto recebido como entrada e mostre o valor resultante.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int valorCompra,valorDesconto;
	printf("Insira o valor do produto que deseja comprar (KZ): ");
	scanf("%d",&valorCompra);
	
	valorDesconto=(valorCompra*50)/100;
	
	printf("\nO valor enserido é %d Kz\nFoi Aplicado um desconto de 25%%\nValor a pagar: %d KZ ",valorCompra,valorCompra-valorDesconto);
	
	
	return 0;
}
