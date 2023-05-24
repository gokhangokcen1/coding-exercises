#include <stdio.h>

int main(){

	int i,j,satir;
	printf("kac satir istersin : ");
	scanf("%d",&satir);
	
	for(i=1 ; i<=satir; i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1 ; i<=satir; i++){
		for(j=satir;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

