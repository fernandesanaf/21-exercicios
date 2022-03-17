/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/12/2021
MATÉRIA: Construção de Algoritmos

16 - Elabore um algoritmo que calcule o rendimento de um investimento feito por um tempo x. 
Sabendo quanto a aplicação rende e sabendo a inflação do período;
*/
#include <stdio.h>

void main(){
    //variaveis
    float investimento;
    int tempo;
    float inflacao;
    float rendimento;
    float rentabilidade;
    float final;
    float lucro;

    //inserção de valores
    printf("calculo de investimento por meses \n");
    printf("digite o valor do investimento: ");
        scanf("%f" , &investimento);
    printf("digite o tempo: ");
        scanf("%d" , &tempo);
    printf("digite a inflacao: ");
        scanf("%f" , &inflacao);
    printf("digite o rendimento da aplicacao: ");
        scanf("%f" , &rendimento);

        //transformado de porcantagem
        if(inflacao > 1){
        inflacao /= 100; //inflação = inflação / 100;

        }
        if(rendimento > 1){
        rendimento /= 100; //inflação = inflação / 100;
        }

    //calculo da rentabilidade
    rentabilidade = (1 + rendimento) / (1 + inflacao) - 1 ;
    rentabilidade *= 100; //rentabilidade = rentabilidade * 100;

    //rendimento 
    final = investimento * ((1 + rentabilidade) * tempo);
    
    //lucro
    lucro = final - investimento;

    //apresentação final dos resultados para o usuario
    printf("o rendimento desse investimento por %d meses, rende o lucro de R$: %.3f e valor final de R$: %.3f",tempo,lucro, final);

}
//ana