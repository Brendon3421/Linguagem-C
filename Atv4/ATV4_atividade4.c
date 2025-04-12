#include <stdio.h>
main() {
	float num1,num2,num3;
	int verificar;
	printf("Coloque um numero inteiro! \n");
	scanf("%f",&num1);
	printf("Coloque o segundno numero inteiro! \n");
	scanf("%f",&num2);
	printf("Coloque o terceiro numero inteiro! \n");
	scanf("%f",&num3);
	verificar =
	    (num1 == num2 && num2 == num3) ? 7 :
	    (num1 == num2) ? 1 :
	    (num1 == num3) ? 2 :
	    (num2 == num3) ? 3 : 0;


	switch(verificar) {
		case 1:
			printf("O primeiro numero e igual ao segundo. Numero repetido: %0.2f", num1);
			break; 
		case 2:
			printf("O primeiro numero e igual ao terceiro. Numero repetido: %0.2f", num1);
			break;
		case 3:
			printf("O segundo numero e igual ao terceiro. Numero repetido: %0.2f", num2);
			break;
		case 7:
			printf("Todos os numeros são iguais: %0.2f", num1);
			break;
		default:
			printf("Nenhum numero repetido.\n");
	};
};

