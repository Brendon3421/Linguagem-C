#include <stdio.h>
#include <math.h>

main(){
	float media,distancia,combustivel;
	printf("Qual foi a distancia percorrida? (ex:332.51)");
	scanf("%f",&distancia);
	printf("Quantos Litros de combustivel foram gastos? (ex: 31.5)");
	scanf("%f",&combustivel);
	media=distancia/combustivel;
	printf("O consumo medio foi: %f",media);
	}
