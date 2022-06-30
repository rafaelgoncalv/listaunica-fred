#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em
sequência de uma resistência R3. Faça um algoritmo para calcular a resistência
equivalente desse circuito.

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float r1,r2,r3,req1,req2;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor resistência r1:");
    scanf("%f",&r1);
    printf("Digite o valor resistência r1:");
    scanf("%f",&r2);
    printf("Digite o valor resistência r1:");
    scanf("%f",&r3);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    req1 = (r1*r2)/(r1+r2);// r1 = 30 e r2 = 15
    //req1 = 10
    req2 = req1 + r3; // r3=18
    //req2 = 28

	/* Saida de dados */

    printf("O valor da resistência equivalente é %.2f ohms",req2);
	
	// Exibe mensagem na tela

	/* Fim */ 

	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
