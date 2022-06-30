#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Em diversas situa��es, � �til o uso de d�gitos verificadores. D�gito 
verificador ou algarismo de controle � um mecanismo de autentica��o utilizado para 
verificar a validade e a autenticidade de um valor num�rico, evitando dessa forma fraudes 
ou erros de transmiss�o ou digita��o. Uma das formas mais comuns de c�lculo de d�gito 
verificadores � o m�todo conhecido por m�dulo 11. O c�lculo do DV no m�dulo 11 � 
feito, � feito como se segue: para calcular o primeiro d�gito verificador, cada d�gito do 
n�mero, come�ando da direita para a esquerda (do d�gito menos significativo para o 
d�gito mais significativo) � multiplicado, na ordem, por 2, depois 3, depois 4 e assim 
sucessivamente, at� o primeiro d�gito do n�mero. O somat�rio dessas multiplica��es 
dividido por 11. O resto desta divis�o (m�dulo 11) � subtra�do da base (11), o resultado � 
o d�gito verificador. O Banco do Brasil utiliza o c�digo m�dulo 11, substituindo por X o 
valor do d�gito verificador quando este � 10. Escreva um programa que receba um 
n�mero com os 4 primeiros d�gitos de uma ag�ncia e imprima o n�mero da ag�ncia 
completo (numero � dv).

Ag�ncia Alg. 1 Alg. 2 Alg. 3 Alg. 4 DV
4870-4 		4 	 8	    7      0   (4*5) + (8*4) + (7*3) + (0*2) = 73
								    73 mod 11 = 7 --- 11-7 = 4
4881-X      4    4      4      1   (4*5) + (8*4) + (8*3) + (1*2) = 78
                                   78 mod 11 = 1 --- 11 � 1 = 10 (X)
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int num,alg1,rest1,alg2,rest2,alg3,rest3,soma,div,dv;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o número da agência:");
    scanf("%d",&num);


	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    //Separando os dígitos digitados

    //4881

    alg1 = num/1000; //4
    rest1 = num%1000; //881
    alg2 = rest1/100; //8
    rest2 = rest1%100; //81
    alg3 = rest2/10; //8
    rest3 = rest2%10; //1

    //Operação perdida com os dígitos

    soma = alg1*5 + alg2*4 + alg3*3 + rest3*2;

    //Cálculo dígito verificador

    div = soma%11;
    dv = 11 - div;

	/* Saida de dados */

    if(dv == 10)
        { //4881
          //4881-x
            printf("\nO dígito verificador é = %d",dv);
            printf("\nAgência: %d-x",num);
            printf("\n\n\n");

        }else
        { //4870
          //4870-4
            printf("\nO dígito verificador é = %d",dv);
            printf("\nAgência: %d-%d",num,dv);
            printf("\n\n\n");

        }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
