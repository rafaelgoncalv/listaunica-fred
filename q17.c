#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
no sentido de que as notas de menor valor fossem distribuídas em número mínimo
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int num,qtd100,n100,qtd50,n50,qtd20,n20,qtd10,n10,qtd5,n5,qtd2,n2;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor da quantia que deseja saber a distribuição:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

	/* Saida de dados */

    if(num>=50){

        qtd100 = num/100; //quantidade de notas de notas de 100
        n100 = num%100; //o resto da divisão
        qtd50 = n100/50;//quantidade de notas de notas de 50
        n50 = n100%50; //o resto da divisão
        qtd20 = n50/20;//quantidade de notas de notas de 20
        n20 = n50%20; //o resto da divisão
        qtd10 = n20/10;//quantidade de notas de notas de 10
        n10 = n20%10;//o resto da divisão
        qtd5 = n10/5;//quantidade de notas de notas de 5
        n5 = n10%5;//o resto da divisão
        qtd2 = n5/2;//quantidade de notas de notas de 2
        n2 = n5%2;//o resto da divisão e a quantidade das notas de 1

        printf("\n %d notas de R$100,00",qtd100);
        printf("\n %d notas de R$50,00",qtd50);
        printf("\n %d notas de R$20,00",qtd20);
        printf("\n %d notas de R$10,00",qtd10);
        printf("\n %d notas de R$5,00",qtd5);
        printf("\n %d notas de R$2,00",qtd2);
        printf("\n %d notas de R$1,00",n2);

    }else{
        if(num>=20 && num<50){


             qtd50 = num/50;//quantidade de notas de notas de 50
             n50 = num%50; //o resto da divisão
             qtd20 = n50/20;//quantidade de notas de notas de 20
             n20 = n50%20; //o resto da divisão
             qtd10 = n20/10;//quantidade de notas de notas de 10
             n10 = n20%10;//o resto da divisão
             qtd5 = n10/5;//quantidade de notas de notas de 5
             n5 = n10%5;//o resto da divisão
             qtd2 = n5/2;//quantidade de notas de notas de 2
             n2 = n5%2;//o resto da divisão e a quantidade das notas de 1

            printf("\n %d notas de R$50,00",qtd50);
            printf("\n %d notas de R$20,00",qtd20);
            printf("\n %d notas de R$10,00",qtd10);
            printf("\n %d notas de R$5,00",qtd5);
            printf("\n %d notas de R$2,00",qtd2);
            printf("\n %d notas de R$1,00",n2);
            

        }else{
            if(num>=10 && num<20){


                 qtd20 = num/20;//quantidade de notas de notas de 20
                 n20 = num%20; //o resto da divisão
                 qtd10 = n20/10;//quantidade de notas de notas de 10
                 n10 = n20%10;//o resto da divisão
                 qtd5 = n10/5;//quantidade de notas de notas de 5
                 n5 = n10%5;//o resto da divisão
                 qtd2 = n5/2;//quantidade de notas de notas de 2
                 n2 = n5%2;//o resto da divisão e a quantidade das notas de 1

                printf("\n %d notas de R$20,00",qtd20);
                printf("\n %d notas de R$10,00",qtd10);
                printf("\n %d notas de R$5,00",qtd5);
                printf("\n %d notas de R$2,00",qtd2);
                printf("\n %d notas de R$1,00",n2);

            }else{
                if(num>=5 && num<10){

                    qtd5 = num/5;//quantidade de notas de notas de 5
                    n5 = num%5;//o resto da divisão
                    qtd2 = n5/2;//quantidade de notas de notas de 2
                    n2 = n5%2;//o resto da divisão e a quantidade das notas de 1

                    printf("\n %d notas de R$50,00",qtd50);
                    printf("\n %d notas de R$20,00",qtd20);
                    printf("\n %d notas de R$10,00",qtd10);
                    printf("\n %d notas de R$5,00",qtd5);
                    printf("\n %d notas de R$2,00",qtd2);
                    printf("\n %d notas de R$1,00",n2);

                
                }else{
                    if(num>=1 && num<5){

                        qtd2 = num/2;//quantidade de notas de notas de 2
                        n2 = num%2;//o resto da divisão e a quantidade das notas de 1

                        printf("\n %d notas de R$2,00",qtd2);
                        printf("\n %d notas de R$1,00",n2);
                    }
                }
            }
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 

	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
