#include <stdio.h>
main(){
	int a,b,resto,divisao;
	
	printf("Digite um numero");
    scanf("%i",&a);
    printf("Digite outro numero");
	scanf("%i",&b);
	divisao=a/b;
	resto=a%b;
	printf("resto: %i ",resto);
	
	printf("divisao : %i" ,divisao);
	}
