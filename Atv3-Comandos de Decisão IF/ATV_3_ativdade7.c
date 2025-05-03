#include <stdio.h>
#include <math.h>
main(){
	float salario,calc,calc2;
	printf("Digite seu salario! \n");
	scanf("%f",&salario);
	if(salario <= 1000){
		
		calc=(salario*0.05);
		salario = calc + salario;	
		printf("O seu salario teve um aumento de 5 e ficou em : %0.2f" , salario);
	
	}else{
	
		calc2=(salario*0.07);;
		salario = salario + calc2;
		printf("O seu salario teve um aumento de 7 e ficou em : %0.2f" , salario);
	}
}
