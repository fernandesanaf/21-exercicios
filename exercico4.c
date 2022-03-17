/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/10/2021
MATÉRIA: Construção de Algoritmos

4-Faça um programa que leia números positivos do teclado e imprima seu quadrado.
Ao digitar um número negativo, o programa deverá ser encerrado.
*/

#include <stdio.h>
#include <math.h> //biblioteca para funçoes matematicas

int main(){
    int resultado; //variaveis utilizadas
    int numero;

    printf("digite um numero que deseja saber o quadrado: "); //insercão do numero
    scanf("%d", &numero);
    if(numero > 0){
        resultado = pow(numero,2); // para descobrir a potencia do numero
        printf("o quadrado e: %d", resultado);
    }
    else {
        printf ("numero invalido"); // se o numero for menor que 0 o programa fechara
    }
}
// ana