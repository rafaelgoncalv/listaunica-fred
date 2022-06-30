#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia 3 números e calcule a média ponderada entre eles.
Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float n1,n2,n3,mediap;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor da nota 1:");
    scanf("%f",&n1);
    printf("Digite o valor da nota 2:");
    scanf("%f",&n2);
    printf("Digite o valor da nota 3:");
    scanf("%f",&n3);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */

	/* Saida de dados */

    if(n1>n2 && n1>n3){
         //Comparando os valores para encontrar o maior número entre eles
        //n1 = 8, n2 = 3 e n3 = 5

        mediap = (n1*5)+ (n2*2.5) + (n3*2.5)/(5+2.5+2.5);

        printf("A média ponderada = (n1*5)+ (n2*2.5) + (n3*2.5)/(5+2.5+2.5) = (%f*5)+ (%f*2.5) + (%f*2.5)/(5+2.5+2.5) =  %.2f",n1,n2,n3,mediap);

    }else{
        if(n2>n1 && n2>n3){

            //n1 = 3, n2 = 8 e n3 = 5

             mediap = (n1*2.5)+ (n2*5) + (n3*2.5)/(5+2.5+2.5);

            printf("A média ponderada = (n1*2.5)+ (n2*5) + (n3*2.5)/(5+2.5+2.5) = (%f*2.5)+ (%f*5) + (%f*2.5)/(5+2.5+2.5) =  %.2f",n1,n2,n3,mediap);

        }else{
            if(n3>n1 && n3>n2){

                //n1 = 3, n2 = 5 e n3 = 8

        mediap = (n1*2.5)+ (n2*2.5) + (n3*5)/(5+2.5+2.5);

        printf("A média ponderada = (n1*2.5)+ (n2*2.5) + (n3*2.5)/(5+2.5+2.5) = (%f*2.5)+ (%f*2.5) + (%f*5)/(5+2.5+2.5) =  %.2f",n1,n2,n3,mediap);

            }else{

                 mediap = (n1*5)+ (n2*2.5) + (n3*2.5)/(5+2.5+2.5);

                printf("A média ponderada = (n1*2.5)+ (n2*2.5) + (n3*2.5)/(5+2.5+2.5) = (%f*2.5)+ (%f*2.5) + (%f*5)/(5+2.5+2.5) =  %.2f",n1,n2,n3,mediap);

            }
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
