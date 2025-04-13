#include <stdio.h>

main(){
	int number,i;
	for(i =1 ; i <= 10;i++){
		printf("Digite o numero %d \n",i);
		scanf("%i", &number);
		if(number < 0){
			printf("O numero e negativo! o numero: %d\n" ,number);
		}else if( number == 0){
			printf("O numero e nulo! o numero: %d\n" ,number);
		}else{
			printf("O numero e positivo! o numero: %d\n" ,number);
		}
	}
}n