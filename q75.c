#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que ordene um array de inteiros de 15 posições utilizando o
método da bolha (bubble sort).

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
    int tam;
    tam = 15;
    int vetor[tam],i,j,auxiliar;


	/* Entrada de dados */
	
	setlocale(LC_ALL,"");

    //Adicionando elementos a vetor de i posições
    for(i=0;i<tam;i++){

        printf("Digite um valor:");
        scanf("%d",&vetor[i]);
    }
    // Solicita que o usuário que entre com algum dado qualquer

    //Imprime o vetor antes da ordenação
    printf("Antes da ordenação:\n");
    for(i = 0;i<tam;i++){

        if(i<13){

            printf("{%d},",vetor[i]);

        }else{
            printf("{%d}",vetor[i]);
        }
    }

    //Exercuta n vezes mesmo se o vetor já tiver ordenado
    for(j=1;j<=tam;j++){ //Possibila que as exercuções de ordenação aconteça n vezes

        //Compara e ordena até o penúltimo elemento já que o elemento seguinte não terá com quem ser comparado
        for(i=0;i<tam-1;i++){ //Ordenando o vetor

            if(vetor[i]>vetor[i+1]){

                auxiliar = vetor[i]; //Guarda a copia do elemento na posição i
                vetor[i] = vetor[i+1];// O que antes tinha maior valor recebe o valor da posição seguinte
                vetor[i+1] = auxiliar;// O que antes tinha o valor menor recebe o valor da posição anterior
            }
        }
    }

	/* Saida de dados */

    //Imprime o vetor após a ordenação
    printf("\nDepois da ordenação:\n");

    for(i = 0;i<tam;i++){

        if(i<tam - 1){

            printf("{%d},",vetor[i]);

        }else{
            printf("{%d}",vetor[i]);
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 
	


   } // Fim 