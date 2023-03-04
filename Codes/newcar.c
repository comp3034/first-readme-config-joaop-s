#include <stdio.h>
#include <stdlib.h>

int main(){

    float custo, dist, impos;


    printf("Insira o valor de fabricacao do carro:\n");
    scanf("%f",&custo);

    dist=(custo*28)/100;
    impos=(custo*45)/100;


    custo =(custo + (dist + impos));    
    printf("Valor total do carro: %.2f!\n",custo);


    return 0;
}