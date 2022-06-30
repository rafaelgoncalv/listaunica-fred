#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.

 
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int n1,n2,n3,soma;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor de n1 (inteiro):");
    scanf("%d",&n1);
    printf("Digite o valor de n2 (inteiro):");
    scanf("%d",&n2);
    printf("Digite o valor de n3 (inteiro):");
    scanf("%d",&n3);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    if(n1>n2 && n2>n3){ //Comparando para encontrar os dois valores maiores entre n1, n2 e n3
        //n1 = 8, n2 = 5 e n3 = 3

        soma = n1 + n2;

        printf("a soma entre n1 e n3 é %d",soma);

    }else{
        if(n2>n1 && n3>n1){ //Encontrando os dois maiores entre n1, n2 e n3

            //n1 = 5, n2 = 8 e n3 = 3

        soma = n2 + n3;

        printf("a soma entre n1 e n3 é %d",soma);

        }else{
            if(n3>n1 && n1>n2){

                //n1 = 5, n2 = 3 e n3 = 8

            soma = n1 + n3;

            printf("a soma entre n1 e n3 é %d",soma);

            }else{

                printf("Não há dois números maiores entre eles, pois todos são iguais.");

            }
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
