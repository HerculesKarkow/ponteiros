//**************************************************************************************************
// Programa exemplo de utiliza��o de ponteiros
//
// Laborat�rio de Algoritmo II
//
// Autor: Hercules A. Karkow
// Data: 02/09/2016
//**************************************************************************************************


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// inicia vari�vel
int Numero = 2;

// indica que o conte�do do ponteiro � a posi��o da mem�ria da vari�vel
int *ptr_numero = &Numero;

// inicia menu principal
int main(int argc, char *argv[]) {
	
	// Exibe mensagem de intera��o com usu�rio pedindo-lhe um n�mero
	printf("Insira um numero: \n");
	
	// pega n�mero do usu�rio e armazena na posi��o da mem�ria da vari�vel atrav�s do ponteiro
	scanf("%i", ptr_numero);
	
	// exibe na tela a mensagem com o n�mero setado pelo usu�rio
	printf("O numero inserido foi: %i\n", *ptr_numero);
	
	return 0;
}
