#include <stdio.h>
main(){
	int number1,calc;
	for(number1 = 10;number1 <= 80;number1++){
		calc = number1 % 2;
		if(calc == 0){
			printf("Sequencia dos numeroes positivos: %d\n",number1);
		}
	}
}