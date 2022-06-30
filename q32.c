#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número
ou um símbolo (qualquer outro caracter, que não uma letra ou número).
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    char caracter;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um caracter qualquer:");
    scanf("%c",&caracter);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    if((int)(caracter)>=65 && (int)(caracter)<=90 || (int)(caracter)>=97 && (int)(caracter)<=122){
        if(caracter =='a'||caracter =='A'||caracter == 'e'|| caracter =='E'|| caracter =='i'|| caracter == 'I'|| caracter =='o'|| caracter =='O'|| caracter =='u'|| caracter =='U'){

            printf("%c é uma vogal");

        }else{
            
            printf("%c é uma consoante");
        }
    }else{

        if((int)(caracter)>=48 && (int)(caracter)<=57){

            printf("%c é um número");
        }else{

            printf("%c é um caractere especial");
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
