#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    char letra;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um letra qualquer (maiúscula ou minúscula):");
    scanf("%c",&letra);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    if(letra == 'a' || letra == 'A'){ //Comparando para descobrir se é vogal ou consoante

        printf("%c é uma vogal",letra);

    }else{

        if(letra == 'e' || letra == 'E'){

            printf("%c é uma vogal",letra);

        }else{

            if(letra == 'i' || letra == 'I'){

                printf("%c é uma vogal",letra);

            }else{

                if(letra == 'o' || letra == 'O'){

                    printf("%c é uma vogal",letra);

                }else{

                    if(letra == 'u' || letra == 'U'){

                        printf("%c é uma vogal",letra);

                    }else{

                        printf("%c é uma consoante",letra);
                    }
                }
            }
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
