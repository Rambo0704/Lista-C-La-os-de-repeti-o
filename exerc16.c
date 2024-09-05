#include <stdio.h>

int main(){
	
	int total,quant;
	float valormercadoria,media,valorestoque=0;
	
	printf("Digite a quantidade de mercadorias em estoque:\n");
	scanf("%d",&total);
	
	for(quant=1;quant<=total;quant++){
		printf("Digite o valor de cada mercadoria\n");
		scanf("%f",&valormercadoria); //valor de cada mercadoria
		valorestoque += valormercadoria; //total
	}
	media = valorestoque/total;
	
	printf("Valor total em estoque: %.2f\n",valorestoque);
	printf("Media: %.2f",media);
return 0;	
}
