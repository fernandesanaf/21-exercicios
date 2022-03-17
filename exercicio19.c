/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 27/11/2021
MATÉRIA: Construção de Algoritmos

19 - Elabore um algoritmo para calcular a área de figuras geométricas. Sendo a figura um quadrado ou um retângulo.
*/
#include <stdio.h>

void main(){
    //variaveis
    float lado1;
    float lado2;
    float area;

    //para calcular a area do retangulo ou do quadrado, usa a mesma formula
    //inserçao de valor pelo usuario
    printf("digite o lado 1 ou base da sua figura: ");
    scanf("%f" , &lado1);
    printf("digite o lado 2 ou altura da sua figura: ");
    scanf("%f" , &lado2);
    
    //formula a = l1 * l2;
    area = lado1 * lado2;
    
    //apresentando o resultado para o usuario
    printf("a area e: %2.f" , area);
}
// ana