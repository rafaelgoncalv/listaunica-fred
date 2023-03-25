#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Funções padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define maxlinhas 3
#define maxcolunas 3

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Criar uma matriz quadrada de ordem n X n e ao final dei possibilidade do usuário escolher como vai exibir a matriz:

    [1] Matriz completa
    [2] Diagonal principal
    [3] Triângulo superior da diagonal principal
    [4] Triângulo inferior da diagonal principal
    [5] Diagonal secundária
    [6] Triângulo superior da diagonal secundária
    [7] Triângulo inferior da diagonal secundária


    Matriz completa
    1 2 3 --> (0,1) (0,2) (triângulo superior da diagonal principal)
    4 5 6 --> (1,2)
    7 8 9

    1 2 3                 (triângulo inferior da diagonal principal)
    4 5 6 --> (1,0)
    7 8 9 --> (2,0) (2,1)

    1 2 3 --> (0,0) (0,1) (Triângulo superior da diagonal secundária)
    4 5 6 --> (1,0) -->
    7 8 9

    1 2 3           (Triângulo inferior da diagonal secundária)
    4 5 6 --> (1,2) --> j<= maxlinhas - i
    7 8 9 --> (2,1) (2,2)

    1 2 3 --> (0,2) (diagonal secundária)
    4 5 6 --> (1,1)
    7 8 9 --> (2,0)

    Diagonal principal

    1     --> (0,0)
      5   --> (1,1)
        9 --> (2,2)

    Triângulo superior
      2  3
         6
    
    Triângulo inferior


    4
    7  8

    Diagonal secundária

        3
      5 
    7 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int matriz[maxlinhas][maxcolunas],i,j,opcao;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");

    //Preechendo a matriz
    for(i=0;i<maxlinhas;i++){
        for(j=0;j<maxcolunas;j++){

            printf("Matriz[%d][%d] = ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    //Escolhendo a forma que a matriz vai ser exibida

    printf("\nEscolha uma opção:\n");
    printf("------------------------------\n");
    printf("[1] Matriz completa\n");
    printf("[2] Diagonal principal\n");
    printf("[3] Triângulo superior da diagonal principal\n");
    printf("[4] Triângulo inferior da diagonal principal\n");
    printf("[5] Diagonal secundária\n");
    printf("[6] Triângulo superior da diagonal secundária\n");
    printf("[7] Triângulo inferior da diagonal secundária\n");
    printf("------------------------------\n");
    scanf("%d",&opcao);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    switch (opcao)
    {
    case 1:

        for(i = 0;i < maxlinhas; i++){
            printf("\n");
            for(j = 0;j < maxcolunas; j++){

                printf("%8d",matriz[i][j]);

            }
            printf("\n");
        }
        break;
    
    case 2:

        for(i = 0;i < maxlinhas; i++){
            printf("\n");
            for(j = 0;j < maxcolunas; j++){

                if(i==j){

                    printf("%8d",matriz[i][j]);

                }else{

                    printf("        ");
                }

            }
            printf("\n");
        }
        break;
    
    case 3:

        for(i = 0; i < maxlinhas; i++){
            printf("\n");
            for(j = 0; j < maxcolunas; j++){

                if(j>i){

                    printf("%8d",matriz[i][j]);

                }else{

                    printf("        ");
                }

            }
            printf("\n");
        }
        break;

    case 4:

        for(i = 0;i < maxlinhas; i++){
            printf("\n");
            for(j=0;j<maxcolunas;j++){

                if(j<i){

                    printf("%8d",matriz[i][j]);

                }else{

                    printf("        ");
                }

            }
            printf("\n");
        }
        break;
    
    case 5:

        for(i = 0;i < maxlinhas; i++){
            printf("\n");
            for(j = 0;j < maxcolunas; j++){

                // A soma i + j sempre dará o tamanho da matriz de ordem n x n
                if(i + j == maxlinhas - 1){

                    printf("%8d",matriz[i][j]);

                }else{

                    printf("        "); 
                }

            }
            printf("\n");
        }
        break;
    
    case 6:

        for(i = 0; i < maxlinhas; i++){
            printf("\n");
            for(j = 0;j < maxcolunas; j++){

                if(i + j == maxlinhas - 1 || j>=maxlinhas - i ){

                    printf("        ");

                }else{

                    printf("%8d",matriz[i][j]);

                }
                 
            }
            printf("\n");
        }

        break;

    case 7:

        for(i = 0;i < maxlinhas; i++){
            printf("\n");
            for(j = 0;j < maxcolunas; j++){

                if(j>=maxlinhas - i){

                    printf("%8d",matriz[i][j]); 

                }else{

                    printf("        ");
                }

            }
            printf("\n");
        }
        break;
    
    default:
        printf("A opção digitada não é  válida!!! ");
        break;
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
