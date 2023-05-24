#include <stdio.h>

int main(){
	
	int i,j,number;
	
	printf("number : ");
	scanf("%d",&number);
	printf("\n");
	
	printf("Tip 1\n");
	
	for(i=1;i<=number;i++){
		for(j=1;j<=number-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
		
	}

	
	
	
	
	printf("\nTip 2\n");
	
	for(i=1;i<=number;i++){
		for(j=1;j<=number-i;j++){
			printf("  ");
		}
		for(j=1;j<=i*2-1;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<=number;i++){
		for(j=1;j<=i;j++){
			printf("  ");
		}
		for(j=1;j<=number*2-1-(i*2);j++){
			printf("* ");
		}
		printf("\n");
	}
	
	
	
	
	printf("\nTip3\n");
	for(i=1;i<=number;i++){
		for(j=1;j<=i;j++){
			printf("  ");
		}
		for(j=1;j<=number-2;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	
	
	return 0;
}

