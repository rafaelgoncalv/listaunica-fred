#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    No Futebol Americano, usa-se o Quarterback Rating como um índice que indica o
desempenho do quarterback (quando maior, melhor). Ele é calculado como indicado a
seguir: Calcula-se o percentual de passes completados em relação aos passes tentados
pelo quarterback. Deste valor subtrai-se 0,3 e divide-se por 0,2. Este valor não deve ser
maior que 2,375 ou menor que 0 (caso seja, ajusta-se o valor para 2,375 ou 0, respectivamente).
    Em seguida, calcula-se a razão de jardas passadas pela quantidade de passes tentados.
Deste valor, subtrai-se 3 e divide-se por 4. Novamente, este valor não deve ser maior que
2,375 ou menor que 0 (caso seja, procede-se como no caso anterior).
    Agora, calcula-se a razão de passes para touchdows pelo número de passes tentados.
Divide-se o valor por 0,05. Mais uma vez, este valor não deve ser maior que 2,375 ou
menor que 0 (caso seja, procede-se como de costume).
    Então, calcula-se a razão entre passes interceptados e o número de passes tentados. Deste
valor, subtrai-se 0,095 e divide-se o resultado por 0,04. Como de praxe, este valor não
deve ser maior que 2,375 ou menor que 0 (caso seja, atua-se como explicado).
    O quarterback rating é calculando somando-se as quatro parcelas anteriores,
multiplicando a soma por 100 e dividindo-se o produto por 6.
Escreva um programa, que leia o número de passes tentados, o número de passes
completos, o número de jardas passadas, o número de passes para touchdown e o número
de passes interceptados e informe o QB Rating do quarterback.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    float passest,passesc,jardas,touchdown,passesi;
    float a,b,c,d,qr;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o número de passos tentados:");
    scanf("%f",&passest);
    printf("Digite o número de passes completos:");
    scanf("%f",&passesc);
    printf("Digite o número de jardas:");
    scanf("%f",&jardas);
    printf("Digite o número de passes touchdown:");
    scanf("%f",&touchdown);
    printf("Digite o número de passe interceptados:");
    scanf("%f",&passesi);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

    /*

    Teste com estes valores seguindo a ordem mostrada:
    10
    5
    50
    3
    2
    */


	/* Saida de dados */

    if(((passesc/passest) - 0.3)/0.2>2.375){ //Avaliando a condição para o valor que será calculado e/ou exibido
        
        
        printf("\nA razão 1 é igual 2,375");
        a = 2.375;


    }else{
        if(((passesc/passest) - 0.3)/0.2<0){

            
            printf("\nA razão 1 é igual a 0");
            a = 0;
        }else{

            
            printf("\nA razão 1 é igual a %.3f",((passesc/passest) - 0.3)/0.2);
            a = ((((passesc/passest) - 0.3)/0.2));
        }
    }

    if(((jardas/passest) - 3)/4>2.375){
        
       
        printf("\nA razão 2 é igual 2,375");
        b = 2.375;


    }else{
        if(((jardas/passest) - 3)/4<0){

            
            printf("\nA razão 2 é igual a 0");
            b = 0;
        }else{
            
            
            printf("\nA razão 2 é igual a %.3f",((jardas/passest) - 3)/4);
            b = (((jardas/passest) - 3)/4);
        }
    }

    if(((touchdown/passest))/0.05>2.375){
        
        
        printf("\nA razão 3 é igual a 2,375");
        c = 2.375;


    }else{
        if(((touchdown/passest))/0.05<0){

            
            printf("\nA razão 3 é igual a 0");
            c = 0;
        }else{

            printf("\nA razão 3 é igual a %.3f",((touchdown/passest))/0.05);
            c = (((touchdown/passest))/0.05);
        }
    }

    if(((passesi/passest)-0.095)/0.04>2.375){
        
        
        printf("\nA razão 4 é igual a 2,375");
        d = 2.375;


    }else{
        if(((passesi/passest)-0.095)/0.04<0){

            printf("\nA razão 4 é igual a 0");
            d = 0;
        }else{

            printf("\nA razão 4 é igual a %.3f",((passesi/passest)-0.095)/0.04);
            d = (((passesi/passest)-0.095)/0.04);
        }
    }

    qr = ((a + b + c + d)*100)/6;

    printf("\nO quarterback rating é igual a %.3f ",qr);



	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
