/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/10/2021
MATÉRIA: Construção de Algoritmos

7-Faça um algoritmo que leia o preço da gasolina e o valor do pagamento,
que exiba quantos litros conseguirá abastecer.
*/

#include <stdio.h>

void main(){
    // variaveis 
    float pagamento;
    float preco;
    float litros;

    printf("digite o preco da gasolina: ");
    scanf("%f", &preco);
    printf("digite o valor que pagou: ");
    scanf("%f", &pagamento);
    
    litros = pagamento / preco; //descobrindo a quantidade de litros 

    printf("\n voce abasteceu: %f l", litros);
}
// ana