#include <stdio.h>

main(){
	
	float fahrenheit,celsius;
	
	printf("Coloque uma temperatura em fahrenheit! ");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit - 32) / 1.8;
	printf("esse e o valor convertido em graus Celsius: %0.2f",celsius);
	
}
