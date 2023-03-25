#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> // Funções matemáticas

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois
números primos. Testes foram feitos, mas ainda não se achou um contra-exemplo.
Escreva um programa mostrando que a afirmação é verdadeira para todo número par
entre 500 e 1000. O programa deve imprimir o número par e os dois primos que somados
dão o número par.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int num, num1, i, num2, j, k, qtddiv1, qtddiv2, naoachei;

	/* Fim */

	/* Entrada de dados */


	// Solicita que o usuário que entre com algum dado qualquer

	
	int iCont;
	int jCont;
	int kCont;
	int termo1;
	int divTermo1;
	int termo2;
	int divTermo2;
	int numero;
	int naoAchei;
	
	
	for(kCont = 500; kCont <= 1000; kCont++){
		numero = kCont;
		if(numero % 2 == 0){
			for(iCont = 1, naoAchei = 1; iCont <= numero; iCont++){
			  divTermo1 = 0;	
			  for(termo1 = 1; termo1 < iCont && naoAchei == 1;  termo1++)
			    if(iCont % termo1 == 0)
			      divTermo1++;
		   	  if(divTermo1 == 1){
				for(jCont = 1; jCont <= numero; jCont++){
				  divTermo2 = 0;	
				  for(termo2 = 1; termo2 < jCont && naoAchei == 1;  termo2++)
				    if(jCont % termo2 == 0)
				      divTermo2++;
			   	  if(divTermo2 == 1){
			   	  	if(termo1 + termo2 == numero){
			   	  	  printf("%d + %d = %d\n", termo1, termo2, numero);
			   	  	  naoAchei = 0;
			   		}
			      }
		       }
			  }
			}
			if(naoAchei == 1){
				printf("CONJECTURA FALHOU PARA %d\n", numero);
			}
		}
	}
        


	/* Fim */ 
	 
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 