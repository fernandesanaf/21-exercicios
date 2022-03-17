/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/10/2021
MATÉRIA: Construção de Algoritmos

8-Faça algoritmo q leia valor em mm e converta em polegadas e em centímetros.
*/

#include <stdio.h>

void main(){
    float centimetros; // variaveis 
    float polegadas;

    printf("digite o numero que deseja converter: ");
    scanf("%f", &centimetros);

    polegadas = centimetros / 2.54; //descobrindo polegadas a partir da formula <-

    printf("comprimento em polegadas: %f in", polegadas);
}
// ana