#include <stdio.h>
main(){
	float a,idade,ano,dias,resp;
	printf("Qual ano voce nasceu?");
	scanf("%f",&a);
	ano=2025;
	resp=ano-a;
	dias=resp*366;
	printf("voce tem esses dias de vida %f",dias);
	}
