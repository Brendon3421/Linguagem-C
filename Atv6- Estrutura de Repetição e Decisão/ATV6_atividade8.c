#include<stdio.h>

	/*Desenvolver um programa que recebe a quantidade de alunos que estão
cursando o 3º semestre. Para cada aluno receber a quantidade de
disciplinas que cursou no 2º semestre e também a nota final relativa a
cada disciplina. Calcular e mostrar a média de cada aluno para verificar o
aproveitamento do último semestre cursado.
*/
int main(){
int alunos,opcao,disciplinas,semestre;
int i,j,quantidadeDenotas;
float nota,somatoriaNota,mediaDasNotas,aproveitamento;
//Coletando Quantidade de Alunos
printf("<< Seja bem vindo! Quantos alunos deseja informar?\n");
scanf("%d",&alunos);

for(i=1;i <= alunos;i++){
	printf("<< Indique seu Semestre aluno %d! \n",i);
	scanf("%d",&semestre);
	if(semestre == 3){
		printf("<< Coloque a Quantidade de disciplinas do Ultimo semestre! \n");
		scanf("%d", &disciplinas);
		
		somatoriaNota = 0; // Zera para cada aluno
		for(j=1;j <= disciplinas;j++){
			printf("<< Coloque a nota final relativa correspondente a disciplina %d do ultimo semestre  (0 a 10) \n", j);
			scanf("%f",&nota);
			quantidadeDenotas++;
			somatoriaNota += nota;
			
		}
		mediaDasNotas = somatoriaNota /disciplinas;
		aproveitamento = (somatoriaNota / quantidadeDenotas);
		
		printf("A media do aluno numero %d ficou em %0.2f e o aproveitamento ficou em %0.1f \n",i,mediaDasNotas,aproveitamento);
	}
	else{
		printf("Esse Programa e para alunos que estao no cursando o 3º semestre! \n");
	}
}
return 0;
	
 }