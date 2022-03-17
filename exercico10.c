/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/12/2021
MATÉRIA: Construção de Algoritmos

10 - Faça Algoritmo pra calcular a hipotenusa, de um triangulo retângulo, com os lados fornecidos por usuário.
*/

#include <stdio.h>
#include <math.h> // biblioteca de funções matematicas

int main(){
    // variaveis utilizadas 
    float hipotenusa;
    float catetooposto;
    float catetoadjacente;

    // incersão dos valores
    printf("CALCULO DE HIPOTENUSA \n");
    printf("digite o cateto oposto: ");
    scanf("%f",&catetooposto);
    
    printf("digite o cateto adjacente: ");
    scanf("%f",&catetoadjacente);
    
    // função matematica para descobrir a hipotenusa h²= co² + ca²
    hipotenusa=(catetooposto*catetooposto)+(catetoadjacente*catetoadjacente); //não funcionou com a função pow, não sei o que fazer pra funcionar, separar entre {} talvez ???
    
    // apresentando o resultado
    printf("a hipotenusa e: %2.f",sqrt(hipotenusa));

}
//ana
//nota para o futuro: quanto mais simples melhor sem complicar muito pra não ter onde errar 