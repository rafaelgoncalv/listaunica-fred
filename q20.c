#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada
maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e as maiores
possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas
prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de
R$ 102,75 e as duas prestações são a iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de
acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é
que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

 float num,presta1,presta2,entrada;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o valor da mercadoria:");
    scanf("%f",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */

    //302,75

    presta1 = num/3; //100
    presta2 = presta1;
    entrada = num - (presta1 + presta2);//2,75

	/* Saida de dados */

    printf("O valor da entrada é R$%.2f",entrada);
    printf("\nO valor das duas parcelas é R$%f",presta1);
	
	// Exibe mensagem na tela

	/* Fim */ 

	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim
