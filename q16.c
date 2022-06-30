#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int num,n1,n2,n3,n4;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um valor com três algarismos:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    //498 ficará de trás pra frente 894
    //Separando os algarismos
    n1 = num/100; // 4
    n2 = num%100; // 98
    n3 = n2/10; // 9
    n4 = n2%10; // 8

	/* Saida de dados */

    printf("%d invertido é %d%d%d", num, n4, n3, n1);
	
	// Exibe mensagem na tela

	/* Fim */ 

	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
