#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int i,numbers[7];
	
	printf("Enter array numbers:");
	for(i=0;i<7;i++){
		scanf("%d",&numbers[i]);
	}
	
	printf("\n Original order:");
	for(i=0;i<7;i++){
		printf("%d ",numbers[i]);
	}
	
	printf("\n Reverse order:");
	for(i=6;i>=0;i--){
		printf("%d ",numbers[i]);
	}

	return 0;
}

