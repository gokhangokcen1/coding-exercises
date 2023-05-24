#include <stdio.h>

int main(){

	int i;
	int number;
	int fac = 1;
	printf("bir sayi girin: ");
	scanf("%d",&number);
	
	for(i = 2; i<= number; i++){
		fac *= i;  
	}

	printf("%d! = %d",number,fac);


	return 0;
}

