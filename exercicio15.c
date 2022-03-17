/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/12/2021
MATÉRIA: Construção de Algoritmos

15 - Faça  um algoritmo que escreva todos os decimais finitos, de duas casas, de 0 a 100.
*/
#include <stdio.h>

int main(){
    //variaveis
    int numero;
    int resultado;

    numero = 0; //igualando o numero a 0

    //laco de repetição de 10 a 100
    for (numero = 10; numero <= 100; numero++){

        //apresentando o resultado para o usuario
        printf("Numeros finitos de 0 a 100 com duas casas: %.2f \n" , numero);
    }
}
//ana