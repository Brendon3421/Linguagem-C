#include <stdio.h>
#include <math.h>
main(){
	/*
	Calcular o IMC (Índice de Massa Corporal) de uma pessoa através da
	fórmula IMC = Peso (kg) / Altura2 (m). Informe a classificação do IMC na
	tela de acordo com as regras abaixo:
	*/
	float peso,altura,calcImc;
	int verificarSaude;
	printf("Coloque seu peso!");
	scanf("%f", &peso);
	printf("Coloque sua Altura!");
	scanf("%f", &altura);
	calcImc=  peso / pow(altura,2);
	verificarSaude = (calcImc < 18.5) ? 1 : 
	(calcImc >= 18.5 && calcImc <= 25) ? 2:
	(calcImc >= 25 && calcImc <= 30) ? 3:
	(calcImc >= 30 && calcImc <= 35) ? 4:
	(calcImc >= 35 && calcImc <= 40) ? 5:
	(calcImc > 40 ) ? 6 : 0;

	switch(verificarSaude){
			case 1:
			printf("Abaixo do peso!\n");
			break;
		case 2:
			printf("Saudavel!\n");
			break;
		case 3:
			printf("Sobrepeso!\n");
			break;
		case 4:
			printf("Obesidade Grau I!\n");
			break;
		case 5:
			printf("Obesidade Grau II!\n");
			break;
		case 6:
			printf("Obesidade Grau III !\n");
			break;
		default:
			printf("Erro: ");
			break;
	}
}