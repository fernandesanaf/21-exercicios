/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/12/2021
MATÉRIA: Construção de Algoritmos

14 - Faça um algoritmo que calcule a medida do perimetro de um triangulo retangulo
*/
#include <stdio.h>

void main(){

    //variaveis
    int lado1;
    int lado2;
    int lado3;
    int perimetro;

    //inserção dos valores
    printf("calculo do perimetro do triangulo retangulo \n");
    printf("digite o primeiro lado: ");
        scanf("%d" , &lado1);
    
    printf("digite o segundo lado: ");
        scanf("%d" , &lado2);
    
    printf("digite o terceiro lado: ");
        scanf("%d" , &lado3);

    // formula p = l1 + l2 + l3;
    perimetro = lado1 + lado2 + lado3;

    // apresentação para o usuario
    printf("o perimetro e: %d" , perimetro);
}
//ana