#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um
salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo
segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de
desconto é 334,29, o que seja menor. 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float salarioi, desconto;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor do salário:");
    scanf("%f",&salarioi);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    if(salarioi * 0.11 <334.29){

        printf("O salário é R$%.2f",salarioi);
        printf("\nO valor do desconto do salário é R$%.2f",salarioi*0.11);

    }else{

        if(salarioi * 0.11>334.29){

            //salário igual a R$3002,73

            printf("O salário é R$%.2f",salarioi);
            printf("\nO valor do desconto do salário é R$334,29");
        }


    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
