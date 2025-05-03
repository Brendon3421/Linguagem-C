/*
Escreva um programa que calcule todos os números inteiros divisíveis por
um certo valor indicado pelo usuário, e compreendidos em um intervalo
também especificado pelo usuário. O usuário deve entrar com um
primeiro valor correspondente ao divisor e após ele vai fornecer o valor
inicial do intervalo, seguido do valor final deste intervalo. Exemplo:
Digite o valor do divisor: 3
Digite o início do intervalo: 17
Digite o final do intervalo: 29
Numeros divisíveis por 3 no intervalo de 17 a 29:
18 21 24 27
*/

main(){
	int divisor,valorInical, valorFinal,numerosDivisivel,quantidade,opcao;


	printf("Coloque o divisor \n");
	scanf("%d",&divisor);
	
	printf("Coloque o inicio do intervalo \n");
	scanf("%d",&valorInical);
	
	printf("Coloque o final do intervalo \n");
	scanf("%d",&valorFinal);
	

	
	while(valorInical < valorFinal ){
		valorInical++;
		numerosDivisivel = valorInical % divisor;
		if(numerosDivisivel == 0){
			quantidade++;
			printf("numeros Dvivisevel :%d \n",valorInical++);
		}
		printf("Valores :%d \n",valorInical);
	}
		


	
}
	
