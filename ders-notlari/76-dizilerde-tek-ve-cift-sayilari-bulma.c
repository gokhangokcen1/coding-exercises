#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int i,unit;
	int numbers[100];
	
	printf("Enter a positive number:");
	scanf("%d",&unit);
	
	printf("\nEnter array number:");
	for(i=0;i<unit;i++){
		scanf("%d",&numbers[i]);
	}
	printf("\nOdd numbers:");
	for(i=0;i<unit;i++){
		if(numbers[i] % 2 == 1)
			printf("%d ",numbers[i]);
	}
	printf("\nEven numbers:");
	for(i=0;i<unit;i++){
		if(numbers[i] % 2 == 0)
			printf("%d ",numbers[i]);
	}
	printf("\n");
	return 0;
}

