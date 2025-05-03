#include <stdio.h>

main(){
	float lado1, lado2, lado3;
	int verificar;
	printf("Digite os 3 lados do triangulo separado por espaco! \n");
	scanf("%f %f %f",&lado1, &lado2, &lado3);
	verificar =
	(lado1 == lado2 && lado2 == lado3) ? 1 :
	(lado1 == lado2 || lado2 == lado3 || lado1 == lado3) ? 2 :
	(lado1 != lado2 || lado2 != lado3) ? 3: 0;
	
	switch(verificar){
		case 1: 
		printf("Seu triangulo e equilatero ,possui todos os lados de mesma medida");
		break;
		case 2: 
		printf("Seu triangulo e isosceles, possui dois lados de mesma medida");
		break;
		case 3: 
		printf("Seu triangulo e escaleno ,possui as medidas dos tres lados diferentes");
		break;
		default:
			printf("Error");
			break;
	}
}