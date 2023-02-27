#include <stdio.h>
#include <stdlib.h>

int main(){

int idade;

printf("Insira sua idade!\n");
scanf("%d",&idade);

if(idade >= 5 && idade <= 7){
    printf("Sua categoria e Infantil A!\n");
}

if(idade >= 8 && idade <= 10){
    printf("Sua categoria e Infantil B!\n");
}

if(idade >= 11 && idade <= 13){
    printf("Sua categoria e Juvenil A!\n");
}

if(idade >= 14 && idade <= 17){
    printf("Sua categoria e Juvenil B!\n");
}

if(idade > 18){
    printf("Sua categoria e Adulto!\n");
}


    return 0;
}