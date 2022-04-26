

/* 
3. Considere uma disciplina que adota o seguinte crit�rio de aprova��o: os alunos fazem 
duas provas (P1 e P2) iniciais; se a m�dia nessas duas provas for maior ou igual a 5.0, e se 
nenhuma das duas notas for inferior a 3.0, o aluno passa direto. 

Caso contr�rio, o aluno faz uma terceira prova (P3) e a m�dia � calculada considerando-se essa terceira nota e a 
maior das notas entre P1 e P2. Neste caso, o aluno � aprovado se a m�dia final for maior 
ou igual a 5.0. 


Escreva um programa que leia inicialmente as duas notas de um aluno, 
fornecidas pelo usu�rio via teclado. Se as notas n�o forem suficientes para o aluno passar 
direto, o programa deve capturar a nota da terceira prova, tamb�m fornecida via o 
teclado.

Como sa�da, o programa deve imprimir a m�dia final do aluno, seguida da 
mensagem "Aprovado" ou "Reprovado", conforme o crit�rio descrito acima.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL,"PORTUGUESE");
	float P1, P2, P3, mediaA, mediaB;
	
	printf("Insira o valor da primeira prova: ");
	scanf("%f",&P1);
	printf("Insira o valor da segunda prova: ");
	scanf("%f",&P2);
	
	mediaA=(P1+P2)/2;
	
	if (mediaA>=5)
	{
		printf("\nNota: %.2f |Aprovado",mediaA);
	}
	else if (P1>=3 && P2>=3 )
	{
		printf("\nP1: %.2f e P2: %.2f |Aprovado",P1,P2);
	}				
	else if (P1>P2)
	{
		printf("\n\n\nInsira o valor da terceira prova: ");
		scanf("%f",&P3);
		mediaB=(P1+P3)/2;
			
		if (mediaB>=5)
		{
			printf("\nNota: %.2f |Aprovado",mediaB);
		}
		else 
		{
			printf("\nNota: %.2f |Reprovado",mediaB);	
		}
				
	}
	else if (P2>P1)
	{
		printf("\n\n\nInsira o valor da terceira prova: ");
		scanf("%f",&P3);
		mediaB=(P2+P3)/2;
			
		if (mediaB>=5)
		{
			printf("\nNota: %.2f |Aprovado",mediaB);
		}
		else 
		{
			printf("\nNota: %.2f |Reprovado",mediaB);	
		}	
	}
	
	
	return 0;
}
