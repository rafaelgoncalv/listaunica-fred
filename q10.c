#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Converter um inteiro informado menor que 32 para sua representação em binário
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //
    int num,e1,e2,e3,e4,e5,e6,e7,e8;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um valor inteiro (num<32):");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    //31

    e1 = num/2; //15
    e2 = num%2; //1
    e3 = e1/2; //7
    e4 = e1%2; //1
    e5 = e3/2; //3
    e6 = e3%2; //1
    e7 = e5/2; //1
    e8 = e5%2; //1


	/* Saida de dados */

    printf("%d em binário é %d%d%d%d%d",num,e8,e7,e6,e4,e2);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
