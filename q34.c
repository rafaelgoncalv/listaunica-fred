#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> // Funções matemáticas
#include <conio.h> // Função para a entrada e saída de programas que usam o console DOS
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> // Funções para manipular strings
#include <time.h> // Trata de tipos de data e hora.
#include <ctype.h> // Contém funções e macros para manipulação de caracteres.

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 
 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    float renda, emprestimo,valorprestacao;
    int parcelas;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite a renda mensal:");
    scanf("%f",&renda); //1000
    printf("Digite o valor do empréstimo:");
    scanf("%f",&emprestimo); //2000
    printf("Digite a quantidade de parcelas:");
    scanf("%d",&parcelas); //7 

	// Solicita que o usuário que entre com algum dado qualquer

    valorprestacao = emprestimo/parcelas; 

	/* Fim */ 

	/* Saida de dados */

    if(emprestimo<= 10*renda){ //10000
        if(valorprestacao<= 0.3*renda){ //300

            printf("Empréstimo concedido");

        }else{

            printf("Emprestimo negado");

        }

    }else{

        printf("Empréstimo negado");

    }
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
