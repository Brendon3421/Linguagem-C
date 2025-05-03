#include<stdio.h>
/*
Criar um programa de calculadora que vai realizando os cálculos entre
dois números enquanto o usuário desejar. Criar um menu de opções
conforme mostrado a seguir:
1 – Soma
2 – Subtração
3 – Multiplicação
4 – Divisão
5 – Sair
*/
main(){
	int number1,number2,opcao;
	do{
		printf("  | Soma  1 | Subtracao 2 | Multiplicacao 3 | Divisao  4| Sair 5 \n");
		scanf("%d",&opcao);		
		switch(opcao){
			case 1:
				printf("Coloque o primeiro numero! \n");
		scanf("%d",&number1);
		printf("Coloque o primeiro segundo! \n");
		scanf("%d",&number2);
				printf("A soma do %d + %d = %d \n",number1,number2,number1+number2);
				break;
				case 2:
					printf("Coloque o primeiro numero! \n");
		scanf("%d",&number1);
		printf("Coloque o primeiro segundo! \n");
		scanf("%d",&number2);
					printf("A Subtracao do %d - %d = %d \n",number1,number2,number1-number2);
				break;
					case 3:
					printf("Coloque o primeiro numero! \n");
		scanf("%d",&number1);
		printf("Coloque o primeiro segundo! \n");
		scanf("%d",&number2);
					printf("A Multiplicacao do %d * %d = %d \n",number1,number2,number1*number2);
				break;
					case 4:
						printf("Coloque o primeiro numero! \n");
		scanf("%d",&number1);
		printf("Coloque o primeiro segundo! \n");
		scanf("%d",&number2);
					printf("A Divisao do %d / %d = %d \n",number1,number2,number1 / number2);
				break;
		}
		
	}while(opcao != 5 );
	printf("<< programa finalizando ... ");
}