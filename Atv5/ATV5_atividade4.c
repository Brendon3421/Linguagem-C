#include <stdio.h>

main(){
	int number1,number2;
		printf("Coloque dois numeros! separados por espaco");
			scanf("%i %i",&number1,&number2);
			
	for(number1 = number1; number1 <= number2;number1++){
	
		printf("Sequencia dos numeros inteiroes que estao entre %d \n",number1);
	}
}