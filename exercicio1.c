/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/10/2021
MATÉRIA: Construção de Algoritmos

1-Faça um algoritmo que leia 5 valores inteiros e apresente na tela o maior deles.
*/

#include <stdio.h>

int main(){
    // VARIAVEIS QUE SERÃO USADAS
    int numero;
    int posicao;
    int maior;

    maior = 0;
    posicao = 0;

    for(posicao = 0; posicao < 6; posicao++){
        printf("DIGITE UM NUMERO:");//INSERSÃO DO NUMERO
        scanf("%d", &numero);
        if (posicao == 0){
        maior = numero; // Verifica e adiciona o maior valor
        posicao++;
        }
        if (numero > maior){
            maior = numero;
            
        }
        
    }
    printf("o maior numero e: %d" , maior);
}

// ana