/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 14/12/2021
MATÉRIA: Construção de Algoritmos
12 - Faça um algoritmo que informa o valor da gasolina e do álcool e verifica qual o mais vantajoso para abastecer.
*/
#include <stdio.h>

void main(){
    //DECLARACAO DE VARIAVEIS
    float alcool;
    float gasolina;
    float valor;
    float resultado;
    float litros;

        printf("USE . (PONTO) PARA MELHOR EXECUCAO :) \n");
        printf("DIGITE O VALOR DO LITRO DA GASOLINA : R$ ");
            scanf("%f" , &gasolina);
        printf("DIGITE O VALOR DO LITRO DO ALCOOL: R$ ");
            scanf("%f" , &alcool);
        printf("DIGITE QUANTOS LITROS PRETENDE ABASTECER: R$ ");
            scanf("%f" , &valor);
        
        if(gasolina < alcool){
            printf("Abastecer com o gasolina e mais vantajoso!\n");
            //quanto ira abastecer segundo o valor colocado
            litros = valor / gasolina;
            //valores
            printf("Com R$ %.2f voce colocara %.2fL de GASOLINA a R$ %.2f", valor , litros , gasolina);
        }else{
            
            printf("Abastecer com o alcool e mais vantajoso !\n");
            //quanto ira abastecer segundo o valor colocado
            litros = valor / alcool;
            //valores
            printf("Com R$ %.2f voce colocara %.2f L de ALCOOL a R$ %.2f", valor , litros , alcool);
        }
}
//ana