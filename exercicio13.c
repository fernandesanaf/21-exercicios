/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/10/2021
MATÉRIA: Construção de Algoritmos

13 - algoritmo que apresente quais multiplicações dão o resultado do numero inserido pelo usuario a partir da tabuada do
*/
#include <stdio.h>

void main(){

    //variaveis
    int numero;
    int multiplicador;
    int multiplicando;
    int resultado;

    //inserçao dos valores
    printf("digite um numero: ");
    scanf("%d" , &numero);

    //condiçao iniciada em 2, enquanto o multiplicador dor menor que o numero, avance
    for (multiplicador = 2; multiplicador <= numero; multiplicador++){
    resultado = numero % multiplicador; //resultado é igual ao produto do numero com o multiplicador 
    multiplicando = numero / multiplicador; //o multiplicando é igual ao numero dividido pelo multiplicador 

        if(resultado == 0){ //quando resultado 0 então
            printf("%d X %d = %d\n", multiplicador , multiplicando , numero); //apresentando os resultados finais 
        }      
    }
}
// ana