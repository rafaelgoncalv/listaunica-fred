#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um algoritmo que verifique se um número é primo ou não. Um número primo é aquele que tem apenas dois divisores que é um e ele mesmo.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int i, num, qtddiv;
    //Inicializando a variável
    qtddiv = 0;
	
	/* Fim */

	/* Entrada de dados */
	
    printf("Digite um valor:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

    for(i = 1; i<=num; i++){

        if(num % i == 0)
            qtddiv++;
    }

    /* Saida de dados */

    if(qtddiv == 2){

        printf("%d é primo",num);
    }else{

        printf("%d não é primo",num);
    }

    // Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 