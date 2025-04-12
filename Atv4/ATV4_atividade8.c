#include <stdio.h>

int main() {
    int idade, sexo, faixa;
    float altura, peso, pesoIdeal;

    printf("Digite sua idade: ");
    scanf("%d", &idade);


    switch ((idade < 12 || idade > 65) ? 0 : 1) {
        case 0:
            printf("Não é possível calcular o peso ideal para essa faixa etária.\n");
            return 0;
        case 1:
        
            if (idade >= 12 && idade <= 17)
                faixa = 1; 
            else if (idade >= 18 && idade <= 25)
                faixa = 2; 
            else
                faixa = 3; 

            switch (faixa) {
                case 1:
                    printf("Faixa etária: Adolescente\n");
                    break;
                case 2:
                    printf("Faixa etária: Jovem\n");
                    break;
                case 3:
                    printf("Faixa etária: Adulto\n");
                    break;
            }

            printf("Digite o sexo (1 - Masculino, 2 - Feminino): ");
            scanf("%d", &sexo);

            printf("Digite sua altura (em metros): ");
            scanf("%f", &altura);

            printf("Digite seu peso atual (em kg): ");
            scanf("%f", &peso);

            switch (sexo) {
                case 1:
                    pesoIdeal = (72.7 * altura) - 62;
                    printf("Peso ideal (masculino): %.2f kg\n", pesoIdeal);
                    break;
                case 2:
                    pesoIdeal = (62.1 * altura) - 48.7;
                    printf("Peso ideal (feminino): %.2f kg\n", pesoIdeal);
                    break;
                default:
                    printf("Sexo inválido.\n");
                    return 0;
            }

            // Comparação entre peso atual e ideal
            switch ((peso == pesoIdeal) ? 0 : (peso > pesoIdeal) ? 1 : 2) {
                case 0:
                    printf("Você está no peso ideal.\n");
                    break;
                case 1:
                    printf("Você está acima do peso ideal.\n");
                    break;
                case 2:
                    printf("Você está abaixo do peso ideal.\n");
                    break;
            }
            break;
    }


}
