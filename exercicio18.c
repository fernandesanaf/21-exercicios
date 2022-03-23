/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes
ana.fernandes8@estudante.ifms.edu.br
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
        printf("x1: %.2f \nx2: %.2f" , x1 , x2);/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes
ana.fernandes8@estudante.ifms.edu.br
*/

// a
#include <stdio.h>

int main()
{
    int num = 1;
    while (num <= 10)
    {
        printf("%d", num);
        num++;
    }

    return 0;
}

// b
#include <stdio.h>

int main()
{
    int num = 100;
    while (num >= 80)
    {
        printf(" %d", num);
        num--;
    }

    return 0;
}

// c
#include <stdio.h>

int main()
{
    int i, num = 30;
    while (num <= 180)
    {
        printf(" %d", num);
        num = num + 10;
    }

    return 0;
}

// d
#include <stdio.h>

int main()
{
    int num = 1;
    while (num <= 10)
    {
        printf(" %d a, %d b, %d c", num, num, num);
        num++;
    }

    return 0;
}

// e
#include <stdio.h>

int main()
{
    int numero, contador = 0;
    numero = 1;
    while (numero <= 311)
    {

        if (numero % 2 == 0)
        {
            contador++;
        }
        else
        {
            printf("\n %d \n", numero);
        }
        numero++;
    }
}

// f
#include <stdio.h>

int main()
{
    int numero, contador = 0;
    numero = 1;
    while (numero <= 403)
    {
        if (numero % 4 == 0)
            printf("x");
        else
            printf(" %d ", numero);
        contador++;

        numero++;
    }
}

// g
#include <stdio.h>

int main()
{
    int num = 0;
    while (num <= 1024)
    {
        printf(" %d c, %d b, %d a", num, num, num);
        num++;
    }

    return 0;
}

// h
#include <stdio.h>
#include <math.h>

int main()
{
    int num = 2, result;

    while (1 == 1)
    {
        result = pow(2, num);
        printf("%d ", result);
        if (result == 1024)
        {
            break;
        }
        num++;
    }
}

// i
#include <stdio.h>

int main()
{
    int num = 1;
    while (num <= 50)
    {
        printf("3%d", num);
        num++;
    }
    return 0;
}

// j
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1;

    while (num <= 1000)
    {
        printf("%d\t", num);
        if (num % 5 == 0)
        {
            printf("\n");
        }
        num++;
    }
    return 0;
}

// k
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // li = linhas \ co = colunas \ num = numeros
    int li = 1, co, num = 1;

    while (li <= 15)
    {
        co = 1;
        while (co <= li)
        {
            printf("%d\t", num);
            num++;
            co++;
        }
        li++;
        printf("\n");
    }

    return 0;
}

// L
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num = 1, co, li, r;
    // co = colunas, li = linha e r = resultado
    for (li = 0; li < 6; li++){
        co = 1;
        while (co <= 5){
            printf("%d\t", num);
            co++;
            num++;
        }
        co = 1;
        num-=5;
        printf("\n");
        while (co <= 5){
            r = num *10;
            printf("%d\t", r);
            co++;
            num++;
        }
        printf("\n");
    }
}

// m
#include <stdio.h>

int main()
{
    int num = 1;
    while (num <= 100)
    {
        printf(" %d\t %d0\t %d00\t %d000\t \n", num, num, num);
        printf("\n");
        num++;
    }
    return 0;
}

//n
#include <stdio.h>
#include <stdlib.h>
   
int main(){
    int num1, num2;
    printf("digite o primeiro número: ");
    scanf("%d", &num1);
    printf("digite o segundo número: ");
    scanf("%d", &num2);
    
    if(num1 < num2){
        printf("número menor é: %d", num1);
    }else{
        printf("número menor é: %d", num2);
    }
    return 0;
}
        
//o
#include <stdio.h>
#include <stdlib.h>
   
int main(){
    int num1, num2 , num3;
    printf("digite o primeiro número: ");
    scanf("%d", &num1);
    printf("digite o segundo número: ");
    scanf("%d", &num2);
    printf("digite o terceiro número: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("%d", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("%d", num2);
    }
    else{
        printf("%d", num3);
    }
    return 0;
}
        
//p
#include <stdio.h>
#include <stdlib.h>
   
int main(){
    int numa, numb, x;

    printf("digite o número A: ");
    scanf("%d", &numa);
    
    printf("Edigite o número B: ");
    scanf("%d", &numb);

    printf("numeros originais A = %d e B = %d \n", numa , numb);
    printf("números invertidos A = %d e B = %d", numb , numa);

    return 0;
}
        
//q
#include <stdio.h>
#include <stdlib.h>
   
int main(){
    float nota1, nota2, tipo, valor, quant, result, meia;
    
    printf("digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("digite o tipo de ingresso: \n");
    printf("1 para inteira 2 para meia entrada");
    scanf("%f", &tipo);
    printf("digite o valor do ingresso: ");
    scanf("%f", &valor);
    printf("digite a quantidade de ingressos: ");
    scanf("%f", &quant);
    
    if(nota1 < nota2){
        printf("nota menor é: %f\n", nota1);
    }else{
        printf("nota menor é: %f\n", nota2);
    }
    
    if(tipo == 1){
        result = valor * quant;
        printf("o valor a ser pago é:  %f\n", result);
    }
    
    if(tipo == 2){
        meia = valor / 2;
        result = meia * quant;
        printf("o valor a ser pago é: R$ %.2f\n", result);
    }
    return 0;
}
        
//r
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float valora;
    float valorb;
    float valorc;
    float delta;
    float x1;
    float x2;

    printf("equação de segundo grau\n");
    printf("digite o valor de A: ");
    scanf("%f" , &valora);
    printf("digite o valor de B: ");
    scanf("%f" , &valorb);
    printf("digite o valor de C: ");
    scanf("%f" , &valorc);

    delta = (valorb*valorb) - (4*valora*valorc);
    if (delta < 0) 
    {
      printf("delta <= 0");
    }else{  
        x1 = ((-valorb) + sqrt(delta)) / (2*valora);
        x2 = ((-valorb) - sqrt(delta)) / (2*valora);
        printf("x1: %.2f \nx2: %.2f" , x1 , x2);
    } 
  return 0;
}
//s
//t
//u
//v
