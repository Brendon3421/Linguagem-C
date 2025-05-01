#include <stdio.h>

int main() {
    int i, numero, positivos = 0, negativos = 0;

    printf("Coloque 10 numeros (negativos ou positivos):\n");

    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero);

        if(numero >= 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    printf("Voce digitou %d numeros positivos.\n", positivos);
    printf("Voce digitou %d numeros negativos.\n", negativos);

    return 0;
}
