
/* 

2. Escreva um programa em C que receba 4 notas, calcule e mostre a média aritmética entre 
elas. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{ 	setlocale(LC_ALL,"PORTUGUESE");
	float notaA, notaB, notaC,notaD,mediaA;
	
	printf("\nInsira os valor da suas provas uma seguida da outra: ");
	scanf("%f%f%f%f",&notaA,&notaB,&notaC,&notaD);
	
	mediaA=(notaA+notaB+notaC+notaD)/4;
	
	printf("A Media do Aluno é: %.2f",mediaA);
	
	return 0;
}
