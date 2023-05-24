#include <stdio.h>

int main(){
	
	int i,j,sayi = 5;
	
	for(i = 1; i<=sayi;i++){
		if(i == 1 && i == sayi)
			for(j = 1; j<=sayi; j++){
				printf("*");
			}
		
		printf("\n");
		printf("*");
	}
	
	
	return 0;
}
