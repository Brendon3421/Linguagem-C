#include <stdio.h>
main(){
	int number1, number2,escolha,calc;
	printf("Coloque dois numeros inteiros! separados por virgula \n");
	scanf("%i %i", &number1, &number2);
	printf(" 1 para adicao, 2 para subtracao, 3 para multiplicacao e 4 para divisao \n");
	scanf("%i",&escolha);
	switch(escolha){
		case 1:
			calc = number1 + number2;
			printf("O resultado da adicao de %i + %i resultou: %i",number1,number2,calc);
			break;
			case 2:
			calc = number1 - number2;
			printf( "O resultado da subtracao de %i - %i resultou: %i",number1,number2,calc);
			break;
			case 3:
			calc =  number1 * number2;
			printf("O resultado da multiplicacao de %i * %i resultou: %i",number1,number2,calc);
			break;
			case 4:
			calc =  number1 / number2;
			printf("O resultado da divisao de %i / %i resultou: %i",number1,number2,calc);
			break;
			default:
			printf("Error");
			break;
	}
}