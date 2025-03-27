#include <stdio.h>
#include <math.h>

main(){
	float provaTeorica= 0.60, provaPratica = 0.40,
	provaTeorica1,provapratica1,provaTeorica2,provapratica2,
	calcProvaTeorica,calcProvaPratica,calcMediaTeorica,calcMediaPratica,calcMediaFinal;
	
	printf("coloque sua nota da prova teorica 1: ");
	scanf("%f",&provaTeorica1);
	printf("coloque sua nota da prova teorica 2: ");
	scanf("%f",&provaTeorica2);
	printf("coloque sua nota da prova Pratica 1: ");
	scanf("%f",&provapratica1);
	printf("coloque sua nota da prova Pratica 2: ");
	scanf("%f",&provapratica2);
	
	calcProvaTeorica=(provaTeorica1+provaTeorica2);
	calcMediaTeorica=(calcProvaTeorica/2)*0.60;
	
	calcProvaPratica=(provapratica1+provapratica2);
	calcMediaPratica=(calcProvaPratica/2)*0.40;
	calcMediaFinal=calcMediaPratica+calcMediaTeorica;
	printf("Media das provas Teoricas: %0.2f ",calcMediaTeorica);
	scanf("");
	printf("Media das provas Praticas: %0.2f ",calcMediaPratica);
	scanf("");
	printf("Media Final: %0.2f ",calcMediaFinal);
}
