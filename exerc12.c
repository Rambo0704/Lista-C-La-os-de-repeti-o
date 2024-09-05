#include <stdio.h>

int main(){
	int mult,result;
	
	for (mult=1;mult<=10;mult++){
		result = 8 * mult;
		printf("8 x %d = %d\n",mult,result);
	}
	return 0;
}
