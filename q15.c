#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
calcular a altura do prédio.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float he,se,hp,sp;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o tamanho da sombra do predio:");
    scanf("%f",&se);
    printf("Digite o tamanho da sombra da pessoa:");
    scanf("%f",&sp);
    printf("Digite a altura da pessoa:");
    scanf("%f",&hp);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    he = hp*(se/sp);// he = altura do prédio; hp = altura da pessoa; se = sombra do predio; sp = sombra da pessoa

	/* Saida de dados */

    printf("A altura do prédio é %.2f metro",he);
	
	// Exibe mensagem na tela

	/* Fim */ 

	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
