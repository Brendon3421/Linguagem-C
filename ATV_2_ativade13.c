#include <stdio.h>
#include <math.h>

main(){
	float valorDiaTrabalhado = 35.00, impostoDeRenda= 0.8,diasTrabalhados,calcValorMensaComImposto,calcValorASerPago,salarioFinal;
	printf("Coloque os dias Trabalhados! ");
	scanf("%f",&diasTrabalhados);
	calcValorASerPago = valorDiaTrabalhado*diasTrabalhados;
	calcValorMensaComImposto = (calcValorASerPago*impostoDeRenda)/100;
	salarioFinal=calcValorASerPago-calcValorMensaComImposto;
	printf("Valor a ser pago dos dias Trabalhados! (SemDesconto!) %0.2f   ",calcValorASerPago);
	printf("Valor que deve ser descontado do imposto de renda %0.2f    ",calcValorMensaComImposto);
	printf("Valor a ser pago dos dias Trabalhados! (Com Desconto!) %0.2f   ",salarioFinal);
}
