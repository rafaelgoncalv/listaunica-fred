#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que carregue um array com tamanho variável. O tamanho máximo
do array é de 100 posições (carga de array com sentinela).
 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int tam;
    tam = 100;
    int vetor[tam],i;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Qual o tamanho vetor (tamanho<=100)?");
    scanf("%d",&tam);

    //Preenchendo o vetor de tamanho tam
    for(i=0;i<tam;i++){

        printf("Vetor[%d] = ",i);
        scanf("%d",&vetor[i]);
    }

    //Imprimindo vetor

    for(i=0;i<tam;i++){

        if(i<tam-1){

            printf("%d,",vetor[i]);

        }else{
            
            printf("%d",vetor[i]);
        }
    }

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

	/* Saida de dados */
	
	// Exibe mensagem na tela

	/* Fim */ 
       
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 