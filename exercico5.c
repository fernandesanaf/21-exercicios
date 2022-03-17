/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 13/12/2021
MATÉRIA: Construção de Algoritmos

5-Faça um algoritmo que o usuario calcule o valor futuro, considerando valor presente, taxa e prazo(juros compostos).
*/
#include <stdio.h>

void main(){
    // variaveis 
    float futuro;
    float presente;
    float taxa;
    float decimal;
    float juros;

    printf("calculo do valor futuro\n");
    // entrada de valores
    printf("digite o valor presente: ");
    scanf("%f" , &presente);
    
    printf("digite a taxa: ");
    scanf("%f" , &taxa);

    if (taxa < 1){
        decimal = 1 + taxa;
    }
    else{
        decimal = 1 + (taxa / 100);
    }
    
    printf("digite o juros: ");
        scanf("%f" , &juros);
    
    futuro = presente * (pow(decimal,juros));
    printf("O VALOR FUTURO e: %f" ,futuro);
}
// ana 