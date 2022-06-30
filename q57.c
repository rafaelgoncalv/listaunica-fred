#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Sendo S = 1 + 1/2^2 + 1/3^3 + 1/4^4 + 1/5^5+...+1/N^N, um somatório de N (informado pelo

usuário) termos, escreva um programa para calcular S para um número N.
 
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int num,contador,expoente,auxiliar;
    float soma;
    //Inicializando variável
    contador = 1;
    soma = 1;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um valor qualquer:"); //Para num = 5, o valor de s = 1,291
    scanf("%d",&num);

    expoente = num;

    auxiliar = num;/* Eu criei está variável, pois a comparação do contador tem que ser com um valor fixo dentro da estrutura enquanto.Lembre-se que o valor 
    de num está sempre sendo decremento, então isto significa que ele jamais vai permanecer sendo o mesmo valor

    */

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 


	/* Saida de dados */

    while(contador<=auxiliar){

        while(num>=1 && expoente>=1){
        
        soma = soma + 1/pow(num,expoente);
        num--;
        expoente--;
        }

        contador = contador + 1;
    }

    printf("\nO valor s é igual %.3f",soma);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
