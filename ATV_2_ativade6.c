#include<stdio.h>

main(){
	float base,altura,calc;
	
	printf("Coloque a base do seu triangulo! ");
	scanf("%f",&base);
	printf("Coloque a altura do seu triangulo!");
	scanf("%f",&altura);
	calc= (base*altura)/2;
	printf("Esse e o valor do seu triangulo,  %0.2f ", calc);
	
}
