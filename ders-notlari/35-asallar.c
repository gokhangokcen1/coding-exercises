 #include <stdio.h>
 
 int main(){
 	int range, i,j,control;
 	
 	printf("Range: ");
 	scanf("%d",&range);
 	
	
	for(i = 2 ; i <= range ; i++){
		control = 1;
		for(j = 2; j <= i/2; j++){
			if(i % j == 0){
				control = 0;
				break;
				}
			}
			if(control != 0){
				printf("%d ",i);
		}
	}
 	
 	return 0;
 }
