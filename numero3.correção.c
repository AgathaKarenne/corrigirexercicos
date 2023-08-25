#include<stdio.h>

 int main(){

     //Dadas as medidas de uma sala, informe sua área.//

     float area, comprimento, largura;

     printf("Digite a area:");
     scanf("%f", &comprimento);

     printf("Digite a largura:");
     scanf("%f", &largura);

     area = comprimento * largura;

     printf("A area da sala e: %.2fm²", area);



}