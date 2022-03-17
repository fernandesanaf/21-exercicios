/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/12/2021
MATÉRIA: Construção de Algoritmos

18 - faça um algoritmo que leia a,b e c que entregue o valor de x1 e x2 seguindo a equação de  2 grau.
*/
#include <stdio.h>
#include <math.h>

void main(){
    //valores
    float valora;
    float valorb;
    float valorc;
    float delta;
    float x1;
    float x2;

    //inserção de valores
    printf("equacao de segundo grau\n");
    printf("digite o valor de A: ");
        scanf("%f" , &valora);
    
    printf("digite o valor de B: ");
        scanf("%f" , &valorb);
    
    printf("digite o valor de C: ");
        scanf("%f" , &valorc);

    //começando a fazer a equação pelo delta
    delta = (valorb*valorb) - (4*valora*valorc);
    if (delta < 0) { //o delta precisa ser diferente de 0 e positivo para conseguir executar a equação
      printf("delta <= 0");
      
      //função pitagoras
    }else{  
        x1 = ((-valorb) + sqrt(delta)) / (2*valora);
        x2 = ((-valorb) - sqrt(delta)) / (2*valora);
        
        //apresentando para o usuario
        printf("x1: %.2f \nx2: %.2f" , x1 , x2);
    } 
}
//ana