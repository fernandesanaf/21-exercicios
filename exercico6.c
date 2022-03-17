/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/10/2021
MATÉRIA: Construção de Algoritmos

6-Faça um algoritmo que converta a unidade de medida ft(pé) em metros e centimetros.
*/

#include <stdio.h>

void main(){
    float centimetros; //variaveis utilizadas
    float metros;
    float pes;

    printf("conversor de ft(pes) para metros e centimetros \n");
    printf("digite o numero que deseja converter: "); // inserção dos valores em ft
    scanf("%f", &pes);
        //formuta metros = pes / 3.281
    metros = pes / 3.281; 
    centimetros = pes / 30.48;

    printf("comprimento em centimetros: %f cm e em metros: %f", centimetros, metros);
}
//ana