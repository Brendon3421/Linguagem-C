#include <stdio.h>

int main() {
    int i;
    float numero;

    for(i = 1; i <= 10; i++) {
        printf("Digite o %d número: ", i);
        scanf("%f", &numero);
        printf("O dobro de %.2f é %.2f\n", numero, numero * 2);
    }

    return 0;
}
