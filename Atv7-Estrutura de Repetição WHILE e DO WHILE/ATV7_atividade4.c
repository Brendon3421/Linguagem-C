#include<stdio.h>
/*Receber números enquanto o usuário quiser digitá-los (a cada número
informado peça que o usuário digite 1 se quiser informar mais um número
ou 2 se quiser parar). No final, exibir:
 o maior número;
 a média aritmética dos números*/
main(){
	int opcao,quantidadeDeNumeros = 0;
	float numero,maiorNumero = 0,mediaAritmetrica = 0,somatoriaNumero = 0;
	do{
		printf("digite 1 se quiser informar mais um número ou 2 se quiser parar \n");
		scanf("%d",&opcao);
		
			while(opcao != 1 && opcao != 2){
			printf("\n Numero invalido! , digite 1 se quiser informar mais um número ou 2 se quiser parar \n");
			scanf("%d",&opcao);
		}
		
		if(opcao == 1){
			printf("Coloque um numero! \n");
			scanf("%f",&numero);
			quantidadeDeNumeros++;
			somatoriaNumero += numero;
				if(numero > maiorNumero){
					maiorNumero = numero;
			}
		}
	
	}while(opcao == 1);
	mediaAritmetrica = somatoriaNumero / quantidadeDeNumeros;
	printf("O maior numero foi: %0.2f",maiorNumero);
	printf("A media arimetrica ficou em: %0.2f",mediaAritmetrica);
	return 0;
}