#include<stdio.h>

 int main(){

   //Escreva um programa que receba um número qualquer e mostre o seu dobro.//

   int numero, dobro;

   printf("Digite um numero");
   scanf("%d", &numero);
   
   dobro = numero * 2;
  // ou dobro = numero + numero; //

  printf("O dobro é: %d", dobro);

}
