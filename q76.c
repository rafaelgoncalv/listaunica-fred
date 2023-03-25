#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa em C, que leia uma string e conte quantas ocorrências de vogais
existem nesta string.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int i,qtdv,qtdc,qtdce;
    char string[100],letra;
    //Inicializando a variável
    qtdv = 0;
    qtdc = 0;
    qtdce = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite uma string:");
    scanf("%100[^\n]", string); // string não precisa de & comercial porque já é interpretado pelo programa como um ponteiro

	// Solicita que o usuário que entre com algum dado qualquer

    for(i=0;string[i]!='\0';i++){

        letra = string[i];

        if(letra == 'a'|| letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){

            qtdv = qtdv + 1; //Contando a quantidade de vogais

        }else{

            // Consoantes: b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, z.
            if(letra == 'b' ||letra == 'c' || letra == 'd' || letra == 'f' || letra == 'g' || letra == 'h' || letra == 'j' || letra == 'k' || letra == 'l' || letra == 'm' || letra == 'n' || letra == 'p' || letra == 'q' || letra == 'r' || letra == 's' || letra == 't' || letra == 'v' || letra == 'w' || letra == 'x' || letra == 'z' 
            || letra == 'B' ||letra == 'C' || letra == 'D' || letra == 'F' || letra == 'G' || letra == 'H' || letra == 'J' || letra == 'K' || letra == 'L' || letra == 'M' || letra == 'N' || letra == 'P' || letra == 'Q' || letra == 'R' || letra == 'S' || letra == 'T' || letra == 'V' || letra == 'W' || letra == 'X' || letra == 'Z'){

            qtdc = qtdc + 1; //Contando a quantidade de consoantes

            }else{

                if(letra!=' '){

                    qtdce = qtdce + 1;
                }
                
            }
        
        }
    }

	/* Fim */ 

	/* Saida de dados */
    printf("\nA quantidade de vogais: %d",qtdv);
    printf("\nA quantidade de consoantes: %d",qtdc);
    printf("\nA quantidade de caracteres especiais: %d",qtdce);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 