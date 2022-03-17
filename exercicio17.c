/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/10/2021
MATÉRIA: Construção de Algoritmos

17 - Faça uma algoritmo que converta a temperatura de graus para fahrenheit.
*/

#include <stdio.h>

void main(){
    // variaveis
    float celsius;
    float fahrenheit;

    // inserção dos valores
    printf("digite o numero que deseja converter: ");
    scanf("%f", &celsius);

    //função 
    fahrenheit = (celsius * 9/5) + 32;
    
    // apresentação para o usuario
    printf("temperatura em fahrenheit: %f f", fahrenheit);
}
//ana