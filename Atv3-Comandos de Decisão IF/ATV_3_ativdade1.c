#include <stdio.h>

main(){
	float number ;
	printf("Digite um numero positivo ou negativo \n");
	scanf("%f",&number);
	if(number>= 0){
		printf("O numero e possitivo %0.2f", number);
	}else{
		printf("O numero e negativo %0.2f", number);
	}
}
