#include <stdio.h>

int main() {
    int valorExtremidade1, valorExtremidade2, numeroParaVerificarSeEstaNoIntervalo, verificar;

    printf("Coloque o valor da primeira Extremidade \n");
    scanf("%i", &valorExtremidade1);

    printf("Coloque o valor da Segunda Extremidade \n");
    scanf("%i", &valorExtremidade2);

    printf("A sua lista ficou com o primeiro valor: %i e o segundo valor ficou: %i.\n", valorExtremidade1, valorExtremidade2);
    printf("Coloque um numero que esteja entre esses numeros!\n");
    scanf("%i", &numeroParaVerificarSeEstaNoIntervalo);

    // Lógica com operador ternário
    verificar = (numeroParaVerificarSeEstaNoIntervalo >= valorExtremidade1 && numeroParaVerificarSeEstaNoIntervalo <= valorExtremidade2) ? 1 :
                (numeroParaVerificarSeEstaNoIntervalo == valorExtremidade1) ? 3 :
                (numeroParaVerificarSeEstaNoIntervalo == valorExtremidade2) ? 2 : 0;

    // switch separado (fora do ternário)
    switch (verificar) {
        case 1:
            printf("O numero está dentro do intervalo!\n");
            break;
        case 2:
            printf("O numero está em cima da segunda extremidade!\n");
            break;
        case 3:
            printf("O numero está em cima da primeira extremidade!\n");
            break;
        default:
            printf("Erro: o numero está fora do intervalo!\n");
            break;
    }

}
