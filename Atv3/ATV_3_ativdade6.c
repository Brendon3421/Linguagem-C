#include <stdio.h>

main(){
	float num1 , num2;
	
	printf("Digite um numero! \n");
	scanf("%f" , &num1);
	printf("Digite um numero! \n");
	scanf("%f" , &num2);
	if(num1 > num2){
		printf("Ordem crescente %0.2f , %0.2f", num1,num2);
	}
		if(num2 > num1){
		printf("Ordem crescente %0.2f , %0.2f", num2,num1);
	}
	
	
}
