#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double average = 0, numbers[3];
	
	printf("Uc adet sayi girin:");
	scanf("%lf%lf%lf",&numbers[0],&numbers[1],&numbers[2]);
	
	average = (numbers[0]+numbers[1]+numbers[2])/3;
	printf("Ortalama : %.3f\n",average);

	return 0;
}

