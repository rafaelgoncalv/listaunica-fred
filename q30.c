#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Um posto está vendendo combustíveis com a seguinte tabela de descontos:
    Álcool Até 25 litros, desconto de 2% por litro
    Acima de 25 litros, desconto de 4% por litro
    Gasolina Até 25 litros, desconto de 3% por litro
    Acima de 25 litros, desconto de 5% por litro

    Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser
pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro
do álcool é R$ 1,90.
 
*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float litros,valor;
    char tipo;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite a quantidade de litros vendidos:");
    scanf("%f",&litros);
    printf("Digite o tipo do combustível (a - álcool e g - gasolina):");
    tipo = getche();

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    switch(tipo){

        case 'a':

        if(litros<=25){ //Cálculo do valor do combustível para o tipo álcool

            valor = litros * 1.90 - 0.02*litros*1.90;

            printf("\nO valor do álcool é R$%.2f",litros*1.90);
            printf("\nO valor a ser pago é R$%.2f",valor);

        }else{

            valor = litros * 1.90 - 0.04*litros*1.90;

            printf("\nO valor do álcool é R$%.2f",litros*1.90);
            printf("\nO valor a ser pago é R$%.2f",valor);

        }
        break;

        case 'g':

        if(litros<=25){ //Cálculo do valor do combustível para o tipo gasolina

            valor = litros * 2.70 - 0.03*litros*2.70;

            printf("O valor do álcool é R$%.2f",litros*2.70);
            printf("\nO valor a ser pago é R$%.2f",valor);

        }else{

            valor = litros * 2.70 - 0.05*litros*2.70;

            printf("O valor do álcool é R$%.2f",litros*2.70);
            printf("\nO valor a ser pago é R$%.2f",valor);

        }
        break;

        default: printf("O tipo de combustível digitado é inválido!!!");
        break;

    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
