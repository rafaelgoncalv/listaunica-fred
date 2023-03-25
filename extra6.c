#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um algoritmo que verifique se um dado número é perfeito ou não. Em Matemática, um número perfeito é um número natural para o qual a soma de todos os seus divisores naturais próprios (excluindo ele mesmo) é igual ao próprio número.[1] 
    Por exemplo, o número 28 é , pois: 28=1+2+4+7+14. Todo número perfeito é um número triangular, bem como um número hexagonal.
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

    if(soma==num){

        printf("%d é perfeito",num);   

    }else{

        printf("%d não é perfeito",num);
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 