#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nome[30];
    int escolha;
    float qnt;
    float valor100=15.00;
    float valor101=10.00;
    float valor102=12.00;
    float valor103=15.00;
    float valor104=16.00;

    
    printf("Bem-Vindo!\n");
    printf("Segue o cardápio da nossa lanchonete!\n");
    printf("Especificação       |     Código      |  Preço\n");
    printf("Cachorro quente     |       100       |  15,00\n");
    printf("Bauru simples       |       101       |  10,00\n");
    printf("Bauru com ovo       |       102       |  12,00\n");
    printf("Hambúrger           |       103       |  15,00\n");
    printf("Cheeseburguer       |       104       |  16,00\n");
    printf("Insira o seu nome!\n");
    gets(nome);
    setbuf(stdin,NULL);
    printf("Insira o código do produto desejado de acordo com o menu!\n");
    scanf("%d",&escolha);
    setbuf(stdin,NULL);
    printf("Insira a quantidade desejada!\n");
    scanf("%f",&qnt);
    setbuf(stdin,NULL);
    
    printf("Nome: %s, Pedido: %d, Quantidade: %.f!\n",nome,escolha,qnt);
    
    
    switch(escolha){
        case 100:
        valor100 = valor100 * qnt;
          printf("Valor: %.2f!\n",valor100);
          break;
          
          case 101:
          valor101 = valor101 * qnt;
          printf("Valor: %.2f!\n",valor101);
          break;
          
          case 102:
          valor102 = valor102 * qnt;
          printf("Valor: %.2f!\n",valor102);
          break;
          
          case 103:
          valor103 = valor103 * qnt;
          printf("Valor: %.2f!\n",valor103);
          break;
          
          case 104:
          valor104 = valor104 * qnt;
          printf("Valor: %.2f!\n",valor104);
          break;
          
          default:
          printf("O produto inserido e invalido!\n");
          break;
    }
    
 
    return 0;
}