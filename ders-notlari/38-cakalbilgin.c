#include <stdio.h>

int main(){

	int i;
	float sum = 0;
	float bugday = 1; 
	
	for(i = 1; i<=64; i++){
		printf("%d. karede bilgine verilecek olan bugday sayisi : %20.0f\n",i,bugday);
		sum += bugday;
		bugday *= 2;
	}

	printf("%20.0f",sum);

	return 0;
}

