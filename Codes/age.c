#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade, dia, mes, ano;

    printf("Insira sua idade em anos:\n");
    scanf("%d",&ano);

printf("Insira sua idade em meses:\n");
    scanf("%d",&mes);

printf("Insira sua idade em dias\n");
    scanf("%d", &dia);

    ano = ano * 365;
    mes = mes * 30;
    
    idade = ano + mes + dia;
    printf("Idade em dias: %d!\n",idade);



    printf("Idade em dias: %d!\n",idade);
    return 0;
}