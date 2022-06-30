#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).
*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float x,y;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor de x:");
    scanf("%f",&x);
    printf("Digite o valor de y:");
    scanf("%f",&y);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    if(x>0 && y>0){

        printf("O ponto (%f,%f) pertence ao 1º quadrante",x,y);
    }else{

        if(x<0 && y>0){

            printf("O ponto (%f,%f) pertence ao 2º quadrante",x,y);
        }else{

            if(x<0 && y<0){

                printf("O ponto (%f,%f) pertence ao 3º quadrante",x,y);
            }else{

                if(x>0 && y<0){

                    printf("O ponto (%f,%f) pertence ao 3º quadrante",x,y);
                }else{
                    printf("O ponto (%f,%f) está sobre o eixo cartesiano",x,y);
                }
            }
        }
    }
	
	// Exibe mensagem na tela
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
