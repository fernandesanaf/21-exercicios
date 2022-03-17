/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 10/12/2021
MATÉRIA: Construção de Algoritmos

9-Faça um algoritmo que leia 3 valores e imprima em ordem decrescente 
*/
#include <stdio.h>

void main (){
    float numero1; //variaveis 
    float numero2;
    float numero3;
    float primeiro;
    float segundo;
    float terceiro;
    float x;

    // inserção dos valores
    printf("Digite o Valor 1 para verificar: ");
        scanf("%f",&numero1);
    printf("Digite o Valor 2 para verificar: ");
        scanf("%f",&numero2);
    printf("Digite o Valor 3 para verificar: ");
        scanf("%f",&numero3);

    //se os valores forem iguais 
    if(numero1 == numero2 == numero3){
        printf("Os numeros digitados sao iguais\n");
        return 0;
    }else{
            //armazenamento de valores
            primeiro=numero1;
            segundo=numero2;
            terceiro=numero3;

        //comparando os valores 
        if(primeiro>segundo){
            x=primeiro;
            primeiro=segundo;
            segundo=x;
        }
        if(primeiro>terceiro){
            x=primeiro;
            primeiro=terceiro;
            terceiro=x;
        }
        if(segundo>terceiro){
            x=segundo;
            segundo=terceiro;
            terceiro=x;
        }
    }
    //resultado para o usuario
    printf("numeros em ordem decrescente:\n %2.f \n %2.f \n %2.f", terceiro, segundo , primeiro); 
    //não sei bem o que significa o %2.f mas eu ACHO que deixa mais bonito 
}

//ana