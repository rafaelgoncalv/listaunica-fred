#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um algoritmo que verifique se um dado número é defectivo ou não. Os números defectivos (em latim, numeri diminutivi) são aqueles em que a soma dos seus divisores próprios é menor do que esse número.[1] 
    Por exemplo, 10 é um número defectivo, porque os divisores próprios de 10 são 1, 2 e 5, cuja soma é 1+2+5=8 < 10.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int num,i,soma;
    //Inicializando a variável

    soma = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite um numéro:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

    for(i = 1; i<num; i++){

        if(num % i == 0){

            soma = soma + i;
        }
    }

	/* Fim */ 

	/* Saida de dados */

    if(soma<num){

        printf("%d é defectivo",num);  

    }else{

        printf("%d não é defectivo",num);
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 