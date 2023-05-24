#include <stdio.h>

int main(){
	int i,j,upperLimit,sum;
	printf("hangi sayiya kadar mukemmel sayilar yazilsin:");
	scanf("%d",&upperLimit);
	
	for(i=1;i<=upperLimit;i++){
		sum = 0;
		for(j=1;j<=i/2;j++){
			if(i % j == 0){
				sum +=j;
			}
		}
		if(sum == i){
			printf("%d mukemmel sayidir\n",i);
		}
	}




	return 0;
}

