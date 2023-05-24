#include <stdio.h>

int main(){

	int i,j,n;
	
	printf("Hankel Matrix\nGive a number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if((j+i)-1 > n) printf("0 ");
			else printf("%d ",(j+i)-1);
			
		}
		printf("\n");
	}



	return 0;
}

