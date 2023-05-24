#include <stdio.h>

int main(){
	int i = 1;
	float sumgrade, examgrade; 
	
	do{
		printf("%dth exam grade ",i);
		scanf("%f",&examgrade);
		if(examgrade == 0){
			break;
		}
		if(examgrade < 0){
			printf("duzgunce gir lan\n");
			continue;
		}else{
			sumgrade += examgrade;
		}
		i++;
	}while(examgrade != 0);
	
	
	printf("%d kadar not girdin, ortalama : %f",i-1,sumgrade/(i-1));




	return 0;
}

