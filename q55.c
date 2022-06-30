#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores
próprios do outro. Os divisores próprios de um número positivo N são todos os divisores
inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e
220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110.
Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20
+ 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142,
efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220).
Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e
18416 são amigos, por exemplo).

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int num1,num2,contador1,contador2,soma1,soma2;
    //Inicializando variável
    contador1 = 1;
    contador2 = 1;
    soma1 = 0;
    soma1 = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor n1:");
    scanf("%d",&num1);
    printf("Digite o valor n2:");
    scanf("%d",&num2);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Saida de dados */

    printf("Os divisores de %d são:",num1);

    while(contador1<num1){

        if(num1%contador1 == 0){//Encontrando os divisores de num1

            printf("\n%d",contador1);

            soma1 = soma1 + num1;//Soma dos divisores de num1


        }

        contador1 = contador1 + 1;
    }

    printf("\nOs divisores de %d são:",num2);

    while(contador2<num2){

        if(num2%contador2 == 0){

            printf("\n%d",contador2);

            soma2 = soma2 + num2;
        }

        contador2 = contador2 + 1;

    }

    if(soma1 == num2 && soma2 == num1){

        printf("\n%d e %d são amigos",num1,num2);

    }else{
        printf("\n%d e %d não são amigos",num1,num2);
    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
