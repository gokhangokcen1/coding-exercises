#include <stdio.h>

int main(){

	float n,i;
	scanf("%f",&n);
	
	for(i=1;i<=n;i++){
		n += (1/i);
	}
	
	printf("r = %f",n);



	return 0;
}

