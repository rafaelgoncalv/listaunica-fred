#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores
próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o
próprio N. Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é
igual à 6 (1 + 2 + 3 = 6). Outro exemplo é o número 28, cujos divisores próprios são 1, 2,
4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28).
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int num,contador,soma;
    //Inicializando variável
    contador = 1;
    soma = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um número inteiro qualquer:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    while(contador<num){

        if(num%contador == 0){

            printf("\n%d",contador);

            soma = soma + contador;//Somando os divisores de num
        }

        contador = contador + 1;
    }
	
    if(soma == num){

        printf("\nO número %d é perfeito",num);
    }else{

        printf("\nO número %d não é perfeito",num);
    }
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
