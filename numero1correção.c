#include<stdio.h>

 main(){
    // escreva um programa que receba dois numeros em mostre, soma, subtraçao, multiplicação e divisão dessses numeros//

    int num1, num2, soma, div, mult, sub;

    printf("Digite o primeiro numero");
    scanf("%d", &num1);
    printf("Digite o segundo numero");
    scanf("%d",&num2);

    //montar as operaçoes//

    soma = num1 + num2;
    sub = num2 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("Soma: %d", soma);
    printf("subtração: %d", sub);
    printf("multplicação: %d", mult);
    printf("divisão: %d", div);
}