#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre
(fica verde), os veículos que nele estavam parados tendem a encontrar os próximos
semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam
abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre
eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade
permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para
percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir
um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um
algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes
informações:
a. a distância desde o semáforo anterior
b. a velocidade permitida da via
c. a aceleração típica dos carros

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float distancia,velocidade,aceleracao,conversao,tempo;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Informe a distancia desde o semáfaro anterior:");
    scanf("%f",&distancia);
    printf("Informe a velocidade permitida pela via:");
    scanf("%f",&velocidade);
    

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    conversao = velocidade/3.6; // 72 km/h
    tempo = distancia/conversao; //Tempo que o carro leva para atingir a velocidade media

	/* Saida de dados */

    printf("O semáfaro deve abrir %.2f depois",tempo);
	
	// Exibe mensagem na tela

	/* Fim */ 

	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
