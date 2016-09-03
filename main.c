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

// inicia variável
int Numero = 2;

// indica que o conteúdo do ponteiro é a posição da memória da variável
int *ptr_numero = &Numero;

// inicia menu principal
int main(int argc, char *argv[]) {
	
	// Exibe mensagem de interação com usuário pedindo-lhe um número
	printf("Insira um numero: \n");
	
	// pega número do usuário e armazena na posição da memória da variável através do ponteiro
	scanf("%i", ptr_numero);
	
	// exibe na tela a mensagem com o número setado pelo usuário
	printf("O numero inserido foi: %i\n", *ptr_numero);
	
	return 0;
}
