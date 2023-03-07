#include <stdio.h>

int main(){
	int a = 1, b = 2, sum = 2;
	int c;
	
	while(sum < 4000000){
		c = a+b;
		a = b;
		b = c; 
		if(c % 2 == 0)
			sum += c;
	}
	
	printf("%d\n",sum);
	
	return 0;
}
