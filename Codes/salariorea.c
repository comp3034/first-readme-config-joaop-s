#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario, reajuste;

    printf("Insira o salario!\n");
    scanf("%f",&salario);

    printf("Insira o reajuste!\n");
    scanf("%f",&reajuste);

    salario=(salario + (salario*reajuste)/100);

    printf("Salario reajustado: %.2f!\n",salario);


    return 0;
}