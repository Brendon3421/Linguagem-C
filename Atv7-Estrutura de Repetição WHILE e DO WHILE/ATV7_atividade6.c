include<stdio.h>
/*
Escreva um programa para receber o saldo inicial de uma conta bancária
de um cliente. A seguir ler um número indeterminado de pares de valores
indicando respectivamente o tipo da operação, sendo: 1.Depósito
2.Retirada 3.Fim e também o valor. Quando for informado para o tipo o
código 3, o programa deve ser encerrado e impresso o saldo final da
conta com as seguintes mensagens: CONTA ZERADA, CONTA
ESTOURADA (se o saldo for negativo) ou CONTA PREFERENCIAL (se o
saldo for positivo)

*/

main(){
	float saldoBancario,valorDeposito,valorSaque;
	int opcao;
	printf("Bem vindo ao seu banco! \n");
	printf("Coloque seu saldo Inical! \n");
	scanf("%f",&saldoBancario);
	do{	
	printf(" \n1 para deposito! \n 2 para retirada \n 3 sair \n");
	scanf("%d",&opcao);
	while(opcao != 1 && opcao != 2 && opcao != 3){
		printf("Coloque um valor valido!");
		printf("1 para deposito! \n 2 para retirada \n 3 sair \n");
		scanf("%d",&opcao);
	}
	
	switch(opcao){
		case 1:
			printf("Coloque o valor que desaja depositar \n");
			scanf("%f",&valorDeposito);
			saldoBancario = saldoBancario + valorDeposito;
			printf("foi acrecentado %0.2f no seu saldo bancario! o seu saldo ficou em %0.2f \n",valorDeposito,saldoBancario);
			break;
				case 2:
			printf("Coloque o valor que desaja retirar \n");
			scanf("%f",&valorSaque);
			saldoBancario = saldoBancario - valorSaque;
			printf("foi descontado %0.2f no seu saldo bancario! o seu saldo ficou em %0.2f \n",valorSaque,saldoBancario);
			break;
	}
	
}while(opcao != 3);
printf("saldo final: %0.2f \n",saldoBancario);
if(saldoBancario < 0){
	printf("Conta negativa! \n");
}else if(saldoBancario == 0){
	printf("Conta Zerada \n");
}else{
	printf("Conta preferencial \n");
}
}
