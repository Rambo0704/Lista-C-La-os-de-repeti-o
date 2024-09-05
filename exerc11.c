#include <stdio.h>

int main(){
	int num,i;
	do {
	
	printf("Digite um Valor:\n");
	scanf("%d",&num);
}while (num<0); //enquanto num for menor que zero faça o de cima.
	for(i=1;i<=num;i++){
		printf("%d \n",i);
	}


	return 0;
}
