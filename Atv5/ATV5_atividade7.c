#include <stdio.h>
main(){
	int alunos;
	float mediaTeorica,mediaLaboratorial,mediaFinal;
	for(alunos = 30; alunos <= 30;alunos++){
		printf("Coloque sua media de teoria e a media de laboratorio,separados por espaco\n");
		scanf("%f %f",&mediaTeorica,&mediaLaboratorial);
		mediaFinal = (mediaTeorica * 0.6) + (mediaLaboratorial * 0.4);
		if(mediaFinal >= 7){
			printf("sua media ficou acima de 7 e foi razoavel! : %0.2f\n",mediaFinal);
		}else if(mediaFinal >= 5 && mediaFinal <= 7){
			printf("sua media ficou entre 5 e 7 e foi mais o menos bem! : %0.2f\n",mediaFinal);
		} else if(mediaFinal <= 5){
			printf("sua media ficou abaixo 5 e foi mal! : %0.2f\n",mediaFinal);
		}else{
			printf("error");
		}
	}
}