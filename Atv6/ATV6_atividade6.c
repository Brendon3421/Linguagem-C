#include <stdio.h>
#include <float.h>  // Para FLT_MAX

int main() {
    float alturaMasculina, alturaFeminina;
    float menorAlturaMasculina = FLT_MAX, maiorAlturaMasculina = 0;
    float menorAlturaFeminina = FLT_MAX, maiorAlturaFeminina = 0;
    float somatoriaMulheresAltura = 0;
    int numeroDeMulheres = 0, numeroDeHomens = 0;
    int i, opcao, pessoas = 3;  

    for(i = 1; i <= pessoas; i++) {
        printf("Digite 1 para masculino, 2 para feminino: \n");
        scanf("%d", &opcao);

        // Masculino
        if(opcao == 1) {
            printf("Coloque sua altura! \n");
            scanf("%f", &alturaMasculina);

            numeroDeHomens++;  // Contando o número de homens

            // Maior altura Masculina
            if(alturaMasculina > maiorAlturaMasculina) {
                maiorAlturaMasculina = alturaMasculina;
            }

            // Menor altura Masculina
            if(alturaMasculina < menorAlturaMasculina) {
                menorAlturaMasculina = alturaMasculina;
            }
        }

        // Feminino
        if(opcao == 2) {
            printf("Coloque sua altura! \n");
            scanf("%f", &alturaFeminina);

            numeroDeMulheres++;  // Contando o número de mulheres
            somatoriaMulheresAltura += alturaFeminina;  // Somando as alturas das mulheres

            // Maior altura Feminina
            if(alturaFeminina > maiorAlturaFeminina) {
                maiorAlturaFeminina = alturaFeminina;
            }

            // Menor altura Feminina
            if(alturaFeminina < menorAlturaFeminina) {
                menorAlturaFeminina = alturaFeminina;
            }
        }
    }

    // Cálculos
    float mediaAlturaFeminina = (numeroDeMulheres > 0) ? somatoriaMulheresAltura / numeroDeMulheres : 0;

    // Determinando qual sexo tem a maior altura
    if(maiorAlturaFeminina > maiorAlturaMasculina) {
        printf("A maior altura é Feminina \n");
    } else {
        printf("A maior altura é Masculina \n");
    }

    // Resultados
    printf("A menor altura do grupo masculino: %.2f \n", menorAlturaMasculina);
    printf("A menor altura do grupo feminino: %.2f \n", menorAlturaFeminina);
    printf("A média de altura das mulheres: %.2f \n", mediaAlturaFeminina);
    printf("O número de homens: %d \n", numeroDeHomens);

    return 0;
}
