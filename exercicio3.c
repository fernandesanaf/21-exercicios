/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 15/12/2021
MATÉRIA: Construção de Algoritmos

3-Faça um algoritmo que transforma uma entrada de binario para decimal
*/
#include <stdio.h>
#include <math.h>

void main(){
    // variaveis 
    long long int binario ;
    long long int posicao;
    long long int x;
    long long int decimal;

    decimal = 0; //igualando o decimal a 0

    // inserção do numero binario
    printf("digite o numero binario que deseja transformar para decimal: ");
	scanf("%lld", &binario);

    // condição
	for (posicao = 0; posicao < 15; posicao++) {

        // função para converter de binario para decimal
		x = binario - ((binario / 10)*10);
		binario /= 10;
		decimal = decimal + x * pow(2,posicao);
	}

    // apresentando o resultado para o usuario
	printf("%lld em numero decimal e %lldn", binario , decimal);
}
//ana