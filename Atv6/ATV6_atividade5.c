#include<stdio.h>

main(){
	 int i =1 , filhos, habitates = 15;
    int somatoriaFilhos = 0;
    float salario, somatoriaSalario = 0;
    float calcMediaFilhosHabitates, calcMediaSalarioHabitates;
    float maiorSalario = 0;
    int pessoasComMaisDe500 = 0;
    float calcPorcentagemDePessoas500 = 0;
    
	for(i;i <= habitates; i++){
		printf("Habitante numero %d \n",i);
		printf("Quantos filhos voce tem? \n");
		scanf("%d",&filhos);
		printf("Coloque seu salario! (COLOQUE PONTO) \n");
		scanf("%f",&salario);
		
		if(salario <= 500){
			pessoasComMaisDe500++;
			calcPorcentagemDePessoas500 = ((float)pessoasComMaisDe500 / habitates) * 100;
		};
		
		somatoriaFilhos += filhos;
		somatoriaSalario += salario;
		
		if( i == 1 ||  salario > maiorSalario){
			maiorSalario = salario;
		}
		
	}
	//Media
	calcMediaFilhosHabitates = somatoriaFilhos / habitates;
	calcMediaSalarioHabitates = somatoriaSalario / habitates;
	//Somatoria Geral dos filhos
	printf("Somatoria Filho %d \n",somatoriaFilhos);
	printf("Somatoria Salario %0.2f \n",somatoriaSalario);
	//Media dos filhos!
	printf("Media Filhos das Pessoas %0.2f \n",calcMediaFilhosHabitates);
	printf("Media salarial das Pessoas %0.2f \n",calcMediaSalarioHabitates);
	//Porcentagem Das pessoas com salarios mairoes que 500;
	printf("Porcentagem de Pessoas que ganham mais de 500 reais : %0.2f \n",calcPorcentagemDePessoas500);
	//MaiorSalario
	printf("Maior salario %0.2f",maiorSalario);
}