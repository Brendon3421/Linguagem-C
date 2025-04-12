#include <stdio.h>

main(){
	int num1,num2,num3,verificar;
	printf("Coloque 3 numeros! (Separados por espaco!)");
	scanf("%i %i %i",&num1,&num2,&num3);
	verificar =
			(num1 > num2 && num1 > num3) ? 1: 
	       (num2 > num1 && num2 > num3) ? 2 :      
		   (num3 > num1 && num3 > num2) ? 3 :
		   	(num1 == num2 && num2 == num3) ? 4 : 0;
        
        switch(verificar){
        		case 1:
        		printf("O primeiro numero digitado e maior! %i",num1);
        		break;
				case 2:     
        		printf("O segundo numero digitado e maior! %i",num2);
        		break;
        		case 3:
        		printf("O tercerio numero digitado e maior! %i",num3);
        		break;
        		case 4:
        		printf("todos iguais %i",num1);
        		break;
        		default:
        			printf("Error desconhecido");
        			break;
		
		}
}                 
                             
                            