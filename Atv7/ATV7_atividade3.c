/*
Receber a nota de um aluno no módulo 1 e no módulo 2 e calcular a
média deles. O usuário só pode digitar notas no intervalo de 0 a 10, caso
ele digite um valor inválido, deve digitar novamente.
*/
#include<stdio.h>

int main(){
	int i = 1;
	float modulo1,modulo2,media;
do{
	printf("Coloque sua nota do modulo 1! \n");
	scanf("%f",&modulo1);
	if(modulo1 > 0 && modulo1 > 10){
		printf("Coloque um valor valido \n");
	}
	
}while(modulo1 < 0 || modulo1 > 10);

do{
	printf("Coloque sua nota do modulo 2! \n");
	scanf("%f",&modulo2);
	if(modulo2 > 0 && modulo2 > 10){
		printf("Coloque um valor valido \n");
	}
	
}while(modulo1 < 0 || modulo1 > 10);
media=(modulo1 + modulo2) / 2;
printf("\nMedia = %.2f",(modulo1+modulo2)/2);
return 0;
}
	
