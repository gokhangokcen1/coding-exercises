#include <stdio.h>

int factorial(int n){
	if(n == 0) return 1;
	else return(n * factorial(n-1));
}

int catalanNumber(int number){
	return ((factorial(2*number))/(factorial(number+1)*factorial(number)));
	
}

int main(){
	int i;
	printf("give me a number: ");
	scanf("%d",&i);
	printf("Catalan number of %d = %d", i, catalanNumber(i));


	return 0;
}


