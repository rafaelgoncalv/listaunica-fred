#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> // Funções para manipular strings

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa em C, que verifique se duas strings são iguais, independente da
caixa das letras. Por exemplo, este programa deve dizer que “Teste”é igual a “TeStE”. 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    char string1[100],string2[100];
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite uma string:"); //Teste
    fgets(string1,100,stdin);
    printf("Digite uma outra string:"); //TeStE
    fgets(string2,100,stdin);

    // Solicita que o usuário que entre com algum dado qualquer

    printf("A string %s e %s",string1,string2);

    //Convertendo a strings para maiúscula

    strupr(string1);
    strupr(string2);

    /*

    Há uma limitação que faz com que este programa funcione apenas no Windows. A funções strupr e strlwr não são funções que existem na biblioteca c, elas 
    existem apenas no Windows.

    */


	/* Fim */ 

	/* Saida de dados */

    if(strcmp(string1,string2)){ //Comparando a string 1 com a string 2 e verificando se são iguais

        printf(" são diferentes");

    }else{

        printf(" são iguais");

    }
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
