#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que descubra se um número é composto ou não. Todo o número par é composto excetuando o número 2, pois é divisível somente por 1 e 2.
    Para um número ser composto ele precisa ter mais de dois divisores, quando incluídos os divisores 1 e o próprio número. 
    Exemplo: o número 49 é composto, pois ele é divisível por mais de dois divisores, o 1, o 7 e o próprio 49. Alguns números impares como o 9, 15, 21, 25, 27, 33, 35, 39, 45, 49, 51, 55, 57.... são compostos, pois são divisíveis por mais de dois números.

    Conclusão (regra): Todo o número inteiro não-primo e diferente de 1 é composto. O número 7 é primo e diferente de 1, por isso não é composto.

    Os primeiros 107 números compostos são (sequência A002808 na OEIS):

    4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30, 32, 33, 34, 35, 36, 38, 39, 40, 42, 44, 45, 46, 48, 49, 50, 51, 
    52, 54, 55, 56, 57, 58, 60, 62, 63, 64, 65, 66, 68, 69, 70, 72, 74, 75, 76, 77, 78, 80, 81, 82, 84, 85, 86, 87, 88, 90, 91, 92, 93, 94, 95, 96, 
    98, 99, 100, 102, 104, 105, 106, 108, 110, 111, 112, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 128, 129, 130, 132, 133, 
    134, 135, 136, 138, 140, 141, 142.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int num,i,qtddiv;
    //Inicializando a variável
    qtddiv = 0;

	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite um valor:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

    for(i = 1; i <= num; i++){

        if(num % i == 0){

            qtddiv++;
        }

    }

    /* Fim */ 

    /* Saida de dados */

    if(qtddiv>=3){

        printf("\n%d é composto", num);

    }else{

        printf("\n%d não é composto", num);

    }
	
	// Exibe mensagem na tela
  
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
