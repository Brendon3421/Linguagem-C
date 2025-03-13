#include <stdio.h>
#include <math.h>

main(){
	float valorHora = 10.0, valorHoraExtra= 15.0,
	horasTrabalhadas,
	diasTrabalhados,
	horasExtrasTrabalhadas,
	calcSalarioMensal,
	calcHoraExtra,
	salarioFinal;
	
	printf("Digite quantas horas por dia voce trabalhou!");
	scanf("%f",&horasTrabalhadas);
	printf("Digite quantos dias voce trabalhou! ");
	scanf("%f",&diasTrabalhados);
	printf("Digite quantas horas extras voce trabalhou no mes");
	scanf("%f",&horasExtrasTrabalhadas);
	calcSalarioMensal=(valorHora*horasTrabalhadas)*diasTrabalhados;
	calcHoraExtra=valorHoraExtra*horasExtrasTrabalhadas;
	salarioFinal=calcSalarioMensal+calcHoraExtra;
	printf("Calculo do Salario Mensal somente com horas normais: %.02f $Reais ",calcSalarioMensal);
	printf("Calculo das horas Extras feitas: %0.2f $Reais ",calcHoraExtra);
	printf("Salario final:%0.2f $Reais ",salarioFinal);
	
	
	
}

