#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e
informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de
cada uma das duas quinzenas.
 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    float mpq,msq;
    int vetor[30],i,maior,menor,soma1,soma2,posmaior,posmenor;
    //Inicializando a variável
    soma1 = 0;
    soma2 = 0;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");

    //Preenchendo o vetor com o índice pluviométrico do mês de junho
    for(i=0;i<30;i++){

        printf("Digite índicie pluviométrico do dia %d:",i+1);
        scanf("%d",&vetor[i]);
    }

    for(i=0;i<30;i++){

        //Encontrando o dia com menor indície pluviométrico
        menor = vetor[0];
        posmenor = 0;

        if(vetor[i]<menor){

            posmenor = i;

        }

        //Encontrando o dia com maior indície pluviométrico
        maior = vetor[0];
        posmaior = 0;

        if(vetor[i]>maior){

            posmaior = i;

        }
    }

    //Encontrando a média da primeira quinzena

    for(i=0;i<15;i++){

        soma1 = soma1 + vetor[i];
    }

    mpq = soma1/15.0;

    //Encontrando a média da segunda quinzena

    for(i=15;i<30;i++){

        soma2 = soma2 + vetor[i];
    }

    msq = soma2/15.0;

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    printf("\nO dia que menos choveu foi %d",posmenor + 1);
    printf("\nO dia que mais choveu foi %d",posmaior + 1);
    printf("\n A média da primeira quinzena foi %.2f",mpq);
    printf("\n A média da segunda quinzena foi %.2f",msq);
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 