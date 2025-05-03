#include<stdio.h>
main(){
	/*Criar um programa que exibe todos os números ímpares de 0 a 100
utilizando do-while*/
int i = 1;
do{
	i = i + 2;
	printf("Valores impares %d \n",i);
}while(i < 100);
return 0;
}