/*
A prefeitura de Sorocaba está em eleições. Apresentaram-se 3
candidatos: JOSÉ com o nº 1, MARIA com o nº 2 e JOÃO com o nº 3.
Cada eleitor deve indicar a sua opção, que pode ser o nº de um candidato
(1,2,3), voto branco (nº 4) ou voto nulo (nº 5). Preparar um programa que
receba e processe os dados de um número não determinado de cédulas
até que seja digitado 0 para o voto, escrevendo os seguintes dados:
a) o número de votos de cada uma das 5 opções;
b) o nome do candidato vencedor;
c) o percentual de eleitores que elegeram o candidato vencedor.
*/

main() {
	// valor comeca em -1 por conta que quando daremos o comando de sair ele ira computar como voto!
	int opcao,candidato = 0,quantidadeDeVotosTotal = -1,canditdatoVencedor,votoNulo = 0;
	int candidato1,candidato2 = 0,candidato3 = 0,branco =0;
	float percentual;
	int maiorVoto,empate;

	do {
		printf("Jose com o n 1, Maria com o n 2 , Joao com o n 3, voto branco n 4 , voto nulo n 5 , 6 para encerra votacao \n");
		scanf("%d",&candidato);
		if(candidato != 1 && candidato !=2 && candidato !=3 && candidato != 4 && candidato !=5 && candidato !=6) {
			printf("coloque um valor valido! \n");
			quantidadeDeVotosTotal--;
		};
		quantidadeDeVotosTotal++;
		switch(candidato) {
			case 1:
				candidato1++;
				printf("Voce votou no Jose \n");
				break;
			case 2:
				candidato2++;
				printf("Voce votou no Maria \n");
				break;
			case 3:
				candidato3++;
				printf("Voce votou no JOAO \n");
				break;
			case 4:
				branco++;
				printf("Voce em branco \n");
				break;
			case 5:
				votoNulo++;
				printf("Voce Nulo! \n");
				break;
		}
	} while(candidato != 6);
	printf("<< Votacao Encerrado... \n");
	printf("<< Quantidade de votos! %d \n",quantidadeDeVotosTotal);
	printf("<< Quantidade de votos! \n Jose: %d ,Maria: %d ,Joao: %d ,branco: %d ,nulo: %d ;",candidato1,candidato2,candidato3,branco,votoNulo);

	canditdatoVencedor =
	    (candidato1 > candidato2 && candidato1 > candidato3) ? 1 :
	    (candidato2 > candidato1 && candidato2 > candidato3) ? 2 :
	    (candidato3 > candidato1 && candidato3 > candidato2) ? 3 :
	    (branco > votoNulo) ? 4 :
	    (votoNulo > branco) ? 5 :
	    (candidato1 == candidato2 && candidato2 == candidato3 && branco == votoNulo) ? 6:
	    (candidato1 == candidato2 || candidato1 == candidato3 || candidato1 == branco || candidato1 == votoNulo) ? 6:
	    (candidato2 == candidato1 || candidato2 == candidato3 || candidato2 == branco || candidato2 == votoNulo) ? 7:
	    (candidato3 == candidato2 || candidato3 == candidato3 || candidato3 == branco || candidato3 == votoNulo) ? 8:
	    (branco == candidato1 || branco == candidato2 || branco == candidato3 || branco == votoNulo) ? 9:
	    (votoNulo == candidato1 || votoNulo == candidato2 || votoNulo == candidato3 || votoNulo == branco) ? 10: 0;

	maiorVoto = candidato1;

	if (candidato2 > maiorVoto) maiorVoto = candidato2;
	if (candidato3 > maiorVoto) maiorVoto = candidato3;
	if (branco > maiorVoto)     maiorVoto = branco;
	if (votoNulo > maiorVoto)   maiorVoto = votoNulo;

	empate = 0;
	if (candidato1 == maiorVoto) empate++;
	if (candidato2 == maiorVoto) empate++;
	if (candidato3 == maiorVoto) empate++;
	if (branco == maiorVoto)     empate++;
	if (votoNulo == maiorVoto)   empate++;

	if (empate > 1) {
		printf("Empate entre %d opcoes.\n", empate);
	} else {
		switch(canditdatoVencedor) {
			case 1:
				printf("o candidato Vencedor foi JOSE \n");
				percentual = ((float)candidato1 * 100.0) / quantidadeDeVotosTotal;
				printf("percentual de eleitores que elegeram o candidato vencedo %0.2f \n",percentual);
				break;
			case 2:
				printf("o candidato Vencedor foi MARIA\n");
				percentual = (candidato2 * 100.0) / quantidadeDeVotosTotal;
				printf("percentual de eleitores que elegeram o candidato vencedo %0.2f \n",percentual);
				break;
			case 3:
				printf("o candidato Vencedor foi JOAO\n");
				percentual = (candidato3 * 100.0) / quantidadeDeVotosTotal;
				printf("percentual de eleitores que elegeram o candidato vencedo %0.2f \n",percentual);
				break;
			case 4:
				printf("a maioria votou em branco!\n");
				percentual = (branco * 100.0) / quantidadeDeVotosTotal;
				printf("percentual de eleitores que elegeram o candidato vencedo %0.2f \n",percentual);
				break;
			case 5:
				printf("a maioria votou nulo!\n");
				percentual = (votoNulo * 100.0) / quantidadeDeVotosTotal;
				printf("percentual de eleitores que elegeram o candidato vencedo %0.2f \n",percentual);
				break;
			case 6:
				printf("empate\n");
				break;
			case 7:
				printf("empate\n");
				break;
			case 8:
				printf("empate\n");
				break;
			case 9:
				printf("empate\n");
				break;
			case 10:
				printf("empate\n");
				break;
		}
	}
}