#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Escreva um programa em C que armazene um vetor de até 30 inteiros. O programa deve
fornecer as seguintes operações:
a. Inserir um elemento no final do vetor
b. Inserir um elemento em uma dada posição
c. Remover um elemento de uma posição indicada
d. Remover todos elementos iguais a um valor indicado
e. Gerar um novo array sem duplicidades a partir deste array

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int tam;
    tam = 30;
    int vetor[tam],posrem[tam],i,j,n,pos,k;
    char opcao;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");

    //Preenchendo de tam posições
    for(i = 0;i<tam;i++){

        printf("Digite um número: ");
        scanf("%d",&vetor[i]);
    }

    //Imprimindo o vetor

    for(i=0;i<tam;i++){

        printf("%3d",vetor[i]);
    }

    printf("\nDigite uma opção:");
    printf("-------------------------------------------------------------\n");
    printf("\na. Inserir um elemento no final do vetor");
    printf("\nb. Inserir um elemento em uma dada posição");
    printf("\nc. Remover um elemento de uma posição indicada");
    printf("\nd. Remover todos elementos iguais a um valor indicado");
    printf("\ne. Gerar um novo array sem duplicidades a partir deste array\n");
    printf("--------------------------------------------------------------\n");
    opcao = getche();

	// Solicita que o usuário que entre com algum dado qualquer

    switch(opcao){

        case 'a':
            printf("\nInserir o elemento que quer no final do vetor:");
            scanf("%d",&n);
            vetor[tam-1] = n;

            for(i=0;i<tam;i++){

                 printf("%3d ",vetor[i]);
            }
            break;
        
        case 'b':
            printf("\nDigite o elemento:");
            scanf("%d",&n);
            printf("\nDigite a posição que quer alterar:");
            scanf("%d",&pos);
            vetor[pos] = n;

            for(i=0;i<tam;i++){

                 printf("%3d ",vetor[i]);
            }
            break;

        case 'c': 
            printf("\nRemover elemento da posição:");
            scanf("%d",&pos);
            vetor[pos] = -1;

            //{8,6,7,5,6}
            //pos 2 por -1
            //{8,6,-1,7,5}
            //{8,6,7,5}


            for(i = 0; i<tam; i++){

                 if(vetor[i] == -1){

                     vetor[i] = vetor[i+1] ;
                     vetor[i+1] = 0;

                }

                if(vetor[i]==0){

                    vetor[i] = vetor[i+1];
                    vetor[i+1] = 0;
                }
            }

            for(i = 0; i<tam;i++){

                printf("%3d ",vetor[i]);
            }
            break;

        case 'd': 

            printf("\nDigite um elemento quer eliminar em todo o vetor:");
            scanf("%d",&n);

            j = 0;
            k = 0;

            //Eliminando todos elementos no vetor igual a n
            for(i = 0; i<tam; i++){ //{6,6,7,5,6,8,3,6,7,1}

                 if(vetor[i] != n){

                    posrem[j] = vetor[i];

                j++;

                }else{

                    k++;
                }
                
            }

            //Imprime o vetor após a remoção dos elementos iguais a n
            for(j = 0; j<tam-k;j++){

                printf("%3d ",posrem[j]);
            }
            break;

        case 'e':

            for( i = 0; i < tam; i++ )
            {
                for( j = i + 1; j < tam; )
                {
                    if( vetor[j] == vetor[i] )
                    { //Toda vez que elemento seguinte for igual ao seguinte, o seguinte vai receber o próximo valor.
                        for( k = j; k < tam; k++ )
                        vetor[k] = vetor[k + 1];

                        tam--;
                        }else
                        {
                        j++;
                    }
                }
            }

            printf("\n");
            for( i = 0; i < tam; i++ ){
                
                printf("%d ", vetor[i] );
            }
            break;
        
        default:
            printf("\nOpção digita é inválida");
            break;


    }
   

	/* Saida de dados */
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	
    } // Fim 