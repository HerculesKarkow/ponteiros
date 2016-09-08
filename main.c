//*************************************
//*              PONTEIROS            *
//* Autora: Letícia Machado           *
//* Aula: Laboratório de Algoritmos 2 *
//* Data: 02/09/2016                  *
//* Antonio Meneghetti Faculdade      *
//*************************************

#include <stdio.h>

int main()
{
	//criacao e inicializacao das variaveis
	int variavel1 = 1, variavel2 = 2;
	char controle = 'n', descarga;
	
	//criacao dos ponteiros
	int *ponteiro1, *ponteiro2;
	
	//enquanto
	while(1)
	{
		//inicializacao dos ponteiros
		ponteiro1 = &variavel1; //ponteiro1 recebe o endereco de variavel1
		ponteiro2 = &variavel2; //ponteiro2 recebe o endereco de variavel2
		
		//exibe o valor contio em cada variavel a partir do endereco contido nos ponteiros
		printf("\n variavel1 = %i", *ponteiro1);
		printf("\n variavel2 = %i", *ponteiro2);
		
		//swap
		
		//exibe o valor contio em cada variavel a partir do endereco contido nos ponteiros
		printf("\n variavel1 depois do swap = %i", *ponteiro1);
		printf("\n variavel2 depois do swap = %i", *ponteiro2);
		
		//exibe a solicitacao de controle
		printf("\n\n deseja finalizar o programa? (s/n)");
		//efetua a leitura do comando
		scanf("%c", &controle);
		//se o comando indicar a finalizacao, finaliza o loop
		if(controle == 's') break;
		
		//exibe a solicitacao de um valor
		printf("\n digite um valor para a variavel1: ");
		//efetua a leitura do valor e transfere o valor para a variavel1
		scanf("%i", ponteiro1);
		//exibe a solicitacao de um valor
		printf("\n digite um valor para a variavel2: ");
		//efetua a leitura do valor e transfere o valor para a variavel1
		scanf("%i%c", ponteiro2, &descarga);
	}
	
	//retorrna 0
	return 0;
}
