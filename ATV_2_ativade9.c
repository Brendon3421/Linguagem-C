#include <stdio.h>
#include <math.h>

main(){
	float number1,potencia=8;
	
	printf("Coloque o numero para colocar na pontecia 8 e descobrir sua raiz quadrada! ");
	scanf("%f",&number1);
	printf("A raiz quadrada %f e a potencia na oitava potencia %f",sqrt(number1),pow(number1, 8));
}
