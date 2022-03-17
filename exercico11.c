/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/12/2021
MATÉRIA: Construção de Algoritmos

11 -Faça um algoritmo que escreva todos os numeros impares menos os divisiveis por 3.
*/
#include <stdio.h>

int main(){
    //variavel
    int numero;
    
    //condição para colocar os numeros na função
    for(numero = 1; numero <= 300; numero++){
        if(numero % 2 == 1){  //separando todos os impares
            if(numero % 3 != 0){ // separando todos os divisiveis por 3
            printf("Numeror impar  divisivel por 3: %d \n" , numero); // apresentando para o usuario
            }
        }
    }
}
// ana