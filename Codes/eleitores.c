#include <stdio.h>
#include <stdlib.h>

int main() {
    int eleitores;
    int brancos, nulos, validos;
    float perc_brancos, perc_nulos, perc_validos;

    printf("Insira o numero de eleitores!\n");
    scanf("%d", &eleitores);

    printf("Insira o numero de votos brancos!\n");
    scanf("%d", &brancos);

    printf("Insira o numero de votos nulos!\n");
    scanf("%d", &nulos);

    printf("Insira o numero de votos validos!\n");
    scanf("%d", &validos);

    perc_brancos = ((float)brancos / eleitores) * 100;
    perc_nulos = ((float)nulos / eleitores) * 100;
    perc_validos = ((float)validos / eleitores) * 100;

    printf("Numero total de eleitores: %d\n", eleitores);
    printf("Percentual de Votos Brancos: %.1f%%\n", perc_brancos);
    printf("Percentual de Votos Nulos: %.1f%%\n", perc_nulos);
    printf("Percentual de Votos Validos: %.1f%\n", perc_validos);



    return 0;
}