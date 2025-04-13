#include <stdio.h>

main(){
	int i,numero,calc;
	printf("Coloque um numero para descobrir a tabuada!");
	scanf("%i",&numero);
	for(i = 0 ; i <= 10;i++){
		calc = i * numero;
		printf("%d x %d : %d\n",i,numero,calc);
	}
}