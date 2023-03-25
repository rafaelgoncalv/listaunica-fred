#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia um vetor de 10 posições de inteiros e um inteiro. O
programa deve informar a primeira posição onde este inteiro ocorre no vetor ou -1 caso o
valor não ocorra no vetor (Busca Sequencial).

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
    int vetor[10],i,num,qtd,pos;
    //Inicializando a variável
    qtd = 0;

	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    //Preenchendo o vetor de 15 posições
    for(i=0;i<10;i++){

        printf("Digite o nº%d:",i+1);
        scanf("%d",&vetor[i]);
    }

    //Escolhendo o valor que desejo procurar

    printf("\nQual valor deseja procurar? ");
    scanf("%d",&num);

    //Buscando o valor dentro do vetor e contabilizando o número de vezes que aparece

    for(i=0;i<10;i++){

        if(vetor[i]==num){

            qtd = qtd + 1;

            if(qtd<2){

                pos = i;
            }

        }
    }

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    if(qtd>=1){

        printf("O número %d foi encontrado na posição %d",num,pos);

    }else{
        
        printf("-1");
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
 
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 