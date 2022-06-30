#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um
programa que leia as notas destes exames e imprima a classificação do aluno, sabendo
que a média é 70.
Classificação:

A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.
Reprovado – outras situações.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float exam1,exam2,exam3,exam4,exam5,media;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite a nota do exame 1:");
    scanf("%f",&exam1);
    printf("Digite a nota do exame 2:");
    scanf("%f",&exam2);
    printf("Digite a nota do exame 3:");
    scanf("%f",&exam3);
    printf("Digite a nota do exame 4:");
    scanf("%f",&exam4);
    printf("Digite a nota do exame 5:");
    scanf("%f",&exam5);


	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    media = (exam1+exam2+exam3+exam4+exam5)/5;

	/* Saida de dados */

    if(media>=70){

        if(exam1>=70 && exam2>=70 && exam3>=70 && exam4>=70 && exam5>=70){
            
            printf("A média das notas é %.2f",media);
            printf("A – passou em todos os exames");

        }else{

            if(exam1>=70 && exam2>=70 && exam3<70 && exam4>=70 && exam5<70){

                printf("A média das notas é %.2f",media);
                printf("B – passou em I, II e IV, mas não em III ou V");
            }else{
                if(exam1>=70 && exam2>=70 && (exam3>=70 || exam4>=70) && exam5<70){

                    printf("A média das notas é %.2f",media);
                    printf("C – passou em I e II, III ou IV, mas não em V");
                }else{

                    printf("A média das notas é %.2f",media);
                    printf("Reprovado – outras situações");
                }
            }
        }

    }else{

        if(media<70){

            if(exam1>=70 && exam2>=70 && exam3<70 && exam4>=70 && exam5<70){


                printf("A média das notas é %.2f",media);
                printf("B – passou em I, II e IV, mas não em III ou V");;

            }else{

                if(exam1>=70 && exam2>=70 && (exam3>=70 || exam4>=70) && exam5<70){

                    printf("A média das notas é %.2f",media);
                    printf("C – passou em I e II, III ou IV, mas não em V"); 

                }else{

                    printf("A média das notas é %.2f",media);
                    printf("Reprovado – outras situações");

                }
            }
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 

	getchar(); /* "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */

	/*
	   Outro jeito de pausar o programa:
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 
        */


   } // Fim 