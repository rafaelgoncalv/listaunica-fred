#include <stdio.h> // FunÃ§Ãµes de entrada e saÃ­da
#include <stdlib.h> // FunÃ§Ã£o padrÃ£o
#include <locale.h> // Habilita o uso de acentuaÃ§Ã£o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // EspaÃ§o destinado a transcriÃ§Ã£o do enunciado para nÃ£o ficar olhando toda hora a lista

	Em diversas situações, é útil o uso de dígitos verificadores. Dígito 
verificador ou algarismo de controle é um mecanismo de autenticação utilizado para 
verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes 
ou erros de transmissão ou digitação. Uma das formas mais comuns de cálculo de dígito 
verificadores é o método conhecido por módulo 11. O cálculo do DV no módulo 11 é 
feito, é feito como se segue: para calcular o primeiro dígito verificador, cada dígito do 
número, começando da direita para a esquerda (do dígito menos significativo para o 
dígito mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim 
sucessivamente, até o primeiro dígito do número. O somatório dessas multiplicações 
dividido por 11. O resto desta divisão (módulo 11) é subtraído da base (11), o resultado é 
o dígito verificador. O Banco do Brasil utiliza o código módulo 11, substituindo por X o 
valor do dígito verificador quando este é 10. Escreva um programa que receba um 
número com os 4 primeiros dígitos de uma agência e imprima o número da agência 
completo (numero – dv).

Agência Alg. 1 Alg. 2 Alg. 3 Alg. 4 DV
4870-4 		4 	 8	    7      0   (4*5) + (8*4) + (7*3) + (0*2) = 73
								    73 mod 11 = 7 --- 11-7 = 4
4881-X      4    4      4      1   (4*5) + (8*4) + (8*3) + (1*2) = 78
                                   78 mod 11 = 1 --- 11 – 1 = 10 (X)
 

*/ 


int main() // FunÃ§Ã£o obrigatÃ³ria

   { /* InÃ­cio */

	// AtenÃ§Ã£o! O nome da variÃ¡vel, somente pode conter letras, nÃºmeros e o caracter _ (undescore)

	/* DeclaraÃ§Ã£o de constantes ou variÃ¡veis */ //

    int num,alg1,rest1,alg2,rest2,alg3,rest3,soma,div,dv;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o nÃºmero da agÃªncia:");
    scanf("%d",&num);


	// Solicita que o usuÃ¡rio que entre com algum dado qualquer

	/* Fim */ 

	/* CÃ¡lculos matemÃ¡ticos */

    //Separando os dÃ­gitos digitados

    //4881

    alg1 = num/1000; //4
    rest1 = num%1000; //881
    alg2 = rest1/100; //8
    rest2 = rest1%100; //81
    alg3 = rest2/10; //8
    rest3 = rest2%10; //1

    //OperaÃ§Ã£o perdida com os dÃ­gitos

    soma = alg1*5 + alg2*4 + alg3*3 + rest3*2;

    //CÃ¡lculo dÃ­gito verificador

    div = soma%11;
    dv = 11 - div;

	/* Saida de dados */

    if(dv == 10)
        { //4881
          //4881-x
            printf("\nO dÃ­gito verificador Ã© = %d",dv);
            printf("\nAgÃªncia: %d-x",num);
            printf("\n\n\n");

        }else
        { //4870
          //4870-4
            printf("\nO dÃ­gito verificador Ã© = %d",dv);
            printf("\nAgÃªncia: %d-%d",num,dv);
            printf("\n\n\n");

        }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
