#include <stdio.h>

int main(){
	
	int num1,num2,num3,resultado,resultado2;
	
	printf("Escreva um numero:\n");
	scanf("%d",&num1);
	
	printf("Escreva outro numero:\n");
	scanf("%d",&num2);
	
	while (num2 == 0){
	
		
		printf("Valor Invalido\n Digite um novo:\n");
		scanf("%d",&num3);
		resultado = num1/num3;
	     printf("Resultado: %d\n",resultado);
	break;
} 
	resultado2 = num1/num2;
	printf("Resultado: %d\n",resultado2);
	
	return 0;
}
