#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida
pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por
2 notas de provas.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float n1,n2,n3,n4,media;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite a nota 1 do 1º bimestre:");
    scanf("%f",&n1);
    printf("Digite a nota 2 do 1º bimestre:");
    scanf("%f",&n2);
    printf("Digite a nota 1 do 2º bimestre:");
    scanf("%f",&n3);
    printf("Digite a nota 2 do 2º bimestre:");
    scanf("%f",&n4);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    media = (n1+n2+n3+n4)/4;

	/* Saida de dados */

    printf("A media das notas é %.2f",media);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
