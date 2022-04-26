
/* 

6. A equipe de corrida do IPRJ está precisando de um programa para calcular o número 
mínimo de litros que eles devem colocar no tanque do carro para percorrer um 
determinado número de voltas até o primeiro reabastecimento. Você está encarregado de 
escrever um programa em C que leia o comprimento da pista (em metros), o número total 
de voltas a serem percorridas, o número de reabastecimentos desejados e o consumo de 
combustível do carro (em Km/L).

O programa deve calcular e escrever o número mínimo 
de litros necessários para percorrer até o primeiro reabastecimento. OBS: Considere que o 
número de voltas entre os reabastecimentos é o mesmo. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	setlocale(LC_ALL,"PORTUGUESE");

float cDa_pista, consuDe_combustivel,nDe_litros, voltasP;
int nDe_voltas, nDe_reabastecimento;

printf("Insira o comprimento da Pista (m): ");
scanf("%f",&cDa_pista);

printf("Insira o numero da volta da corrida: ");
scanf("%d",&nDe_voltas);

printf("Ensira o numero total de reabastecimento: ");
scanf("%d",&nDe_reabastecimento);

printf("Insira o valor de consumo de combustivel (Km/L): ");
scanf("%d",&consuDe_combustivel);

voltasP=nDe_voltas/(nDe_reabastecimento*consuDe_combustivel);
nDe_litros=voltasP*(cDa_pista);

printf ("\n\nO numero minimo de Litro é: %.2f Litros\n",nDe_litros);

	return 0;
}
