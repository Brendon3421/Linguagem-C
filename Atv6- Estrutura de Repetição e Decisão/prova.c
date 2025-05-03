#include <stdio.h>

main(){
	float valor;
	int x,i,number,num;
	
	for(i=1;i <=5 ; i++)
	{
	
		printf("Digite um valor:  \n");
		scanf("%f",&number);
		if(i == 1){
			num=valor;
		}
		if(num<valor){
			valor=num;
		}
		valor++;
	}
	printf("O valor ficou em %0.1f",valor);
}