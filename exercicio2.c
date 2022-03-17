/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/10/2021
MATÉRIA: Construção de Algoritmos

2-Faça um algoritmo que leia um numero e apresente a tabuada do mesmo.
*/
#include <stdio.h>

int main(){
    int tabuada;
    int resultado;
    int numero;

    printf("digite um numero que deseja saber a tabuada: ");
    scanf("%d", &numero);

    tabuada = 1;
    while (tabuada <= 10){
        resultado = tabuada * numero;
        printf("%d + %d = %d \n", tabuada, numero, resultado);
        tabuada++;
    }
}

// ana