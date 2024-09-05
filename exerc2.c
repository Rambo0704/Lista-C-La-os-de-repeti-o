#include <stdio.h>

int main(){
	
	int num1,num2,num3,resultado,resultado2;
	
	
	do {	
	
		printf("Escreva um numero:\n");
	scanf("%d",&num1);
	
	printf("Escreva outro numero:\n");
	scanf("%d",&num2);
	
	if (num2==0){
	    printf("Numero 2 invalido\n Digite um novo:\n");
		scanf("%d",&num3);
		resultado = num1/num3;
	     printf("Resultado: %d\n",resultado);
	 }
}	while (num2 == 0 );

if (num2 != 0){

	resultado2 = num1/num2;
	printf("Resultado: %d\n",resultado2);
	}
	return 0;
}
