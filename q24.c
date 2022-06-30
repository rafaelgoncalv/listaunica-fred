#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia três números e mostre o maior entre eles.

 
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int n1,n2,n3;
	
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

    if(n1>n2 && n1>n3){ //Comparando os valores para encontrar o maior número entre eles
        //n1 = 8, n2 = 3 e n3 = 5

        printf("n1 = %d é o maior entre eles",n1);

    }else{
        if(n2>n1 && n2>n3){

            //n1 = 3, n2 = 8 e n3 = 5

            printf("n2 = %d é o maior entre eles",n2);

        }else{
            if(n3>n1 && n3>n2){

                //n1 = 3, n2 = 5 e n3 = 8

                printf("n3 = %d é o maior entre eles",n3);

            }else{

                printf("todos os números são iguais entre si");

            }
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
