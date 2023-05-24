#include <stdio.h>

int main(){
	int i,j,satir = 0;
	
	printf("Satir girin: ");
	scanf("%d",&satir);
	/*
	Satir girin: 5
		1
		12
		123
		1234
		12345
		12345
		2345
		345
		45
		5
	*/
	for(i=1 ; i<=satir;i++){
		for(j = 1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	for(i=1 ; i<=satir;i++){
		for(j = i; j<=satir; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	printf("------------------\n");
	/*
	Satir girin: 5
		1
		12
		123
		1234
		12345
		1234
		123
		12
		1	
	*/
	for(i=1 ; i<=satir;i++){
		for(j = 1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	for(i=1 ; i<=satir;i++){
		for(j = 1; j<=satir-i; j++){
			printf("%d",j);
		}
		printf("\n");
	}



	return 0;
}

