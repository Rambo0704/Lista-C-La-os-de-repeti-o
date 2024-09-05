#include <stdio.h>

int main(){
	
	int num,mult,result;
	do{
		printf("Digite um valor (1 a 10):\n");
		scanf("%d",&num);
	} while(num>10 || num<0);

	for(mult=1;mult<=10;mult++){
		result = num * mult;
		printf("%d x %d = %d\n",num,mult,result);
	}
	
	return 0;
}
