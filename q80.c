#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> //Funções para manipular strings

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa em C que leia duas string e informe se a primeira contém a
segunda.
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int verificador; //qtdc - Quantidade de caracteres iguais
    char string1[100],string2[100];
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite uma string:");
    fgets(string1,100,stdin);
    printf("Digite uma outra string:");
    fgets(string2,100,stdin);

    // Solicita que o usuário que entre com algum dado qualquer

    if(strstr(string1,string2)!=NULL){ //Se a substring for encontrada dentro da string vai retornar um valor diferente de nulo

    /*Há uma limitação neste algoritmo que faz com que a string interpretada como estando contida em uma outra
    como p. Veja abaixo:
    
    Bom dia e Dia - Apesar de dia e Dia serem palavras iguais devido a sua caraccterização com uma tendo d minúsculo no começi
    e a outra tendo D maiúsculo no inicio da outra é suficiente para que elas sejam interpretas pelo programa como palavras
    diferentes
    
    */

        verificador = 1;
    }else{

        verificador = 0;
    }

	/* Fim */ 


	/* Saida de dados */

    if(verificador){ //Se o verificador for igual 1 que é verdadeiro

        printf("\nA string %s está contida na string %s",string2,string1);

    }else{

        printf("\nA string %s não está contida na string %s",string2,string1);
    }

    printf ( "\nA substring foi encontrada na posição: %ld " , strstr (string1,string2) - string1+1);
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 