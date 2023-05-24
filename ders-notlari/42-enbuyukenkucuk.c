#include <stdio.h>

int main(){
	
	int number,i = 1, largestNumber = 0, smallestNumber = 0;
	
	do{
		printf("give me number: ");
		scanf("%d",&number);
		if(number == 0) break;
		if(number < smallestNumber) smallestNumber = number;
		if(number > largestNumber) largestNumber = number;
		
		i++;	
	}while(number != 0);
		printf("The largest number is : %d\n",largestNumber);
		printf("The smallest number is : %d\n",smallestNumber);
	
	
	
	return 0;
}
