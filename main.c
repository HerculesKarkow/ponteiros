//**************************************************************************************************
// Programa exemplo de utilização de ponteiros
//
// Laboratório de Algoritmo II
//
// Autor: Hercules A. Karkow
// Data: 02/09/2016
//**************************************************************************************************

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// criação da função que realiza a troca das posições
void trocaPosicao(int *p1, int *p2)
{
				
	int aux = 0; // criação e inicialização de uma variável auxiliar
	aux = *p1;   // variaável auxiliar recebe o conteudo do primeiro ponteiro
	*p1 = *p2;	 // primeiro ponteiro recebe o conteudo do segundo ponteiro	
	*p2 = aux;   // segundo ponteiro recebe o conteudo da variável auxiliar
}

main(void)
{
	
	// criacao e inicializacao das variaveis
	int variavel_1 = 1, variavel_2 = 2;	
	char controle = 'n', descarga;
	
	// criacao dos ponteiros
	int *ponteiro_1, *ponteiro_2;
	
	// enquanto
	while(1)
	{
		// inicializacao dos ponteiros
		ponteiro_1 = &variavel_1; // ponteiro_1 recebe o endereco de variavel_1
		ponteiro_2 = &variavel_2; // ponteiro_2 recebe o endereco de variavel_2
		
		// exibe o valor contido em cada variavel a partir do endereco contido nos ponteiros
		printf("\nVariavel_1 = %i", *ponteiro_1);
		printf("\nVariavel_2 = %i", *ponteiro_2);
		
		//swap
		
		trocaPosicao(ponteiro_1, ponteiro_2);
		
		// exibe o valor contido em cada variavel a partir do endereço contido nos ponteiros
		printf("\n Variavel1 depois do swap: %i", *ponteiro_1);
		printf("\n Variavel2 depois do swap: %i", *ponteiro_2);
		
		// exibe a solicitacao de controle
		printf("\n\nDeseja finalizar o programa? (s/n)");
		
		// efetua a leitura do comando
		scanf("%c", &controle);
		
		// se o comando indicar a finalizacao, finaliza o loop
		if(controle == 's') break;
		
		// exibe a solicitacao de um valor
		printf("\nDigite um valor para a variavel_1 ");
		
		// efetua a leiturado valor e transfere o valor para a variavel_1
		scanf("%i", ponteiro_1);
		
		// exibe a solicitacao de um valor
		printf("\nDigite um valor para a variavel_2 ");
		
		// efetua a leitura do valor e transfere o valor para a variavel_2
		scanf("%i%c", ponteiro_2, &descarga);
		//scanf("%i", ponteiro_2, &descarga);
	}
	// retorna 0
	return 0;
}
