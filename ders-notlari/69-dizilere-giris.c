#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

//	int notes[3] = {7,19,24,3,37};
	int notes[5];
	notes[0] = 7;
	notes[1] = 19;
	notes[2] = 24;
	notes[3] = 3;
	notes[4] = 37;
	
	int i,sum = 0;
	sum = notes[0] + notes[4];
	printf("sum : %d\n",sum);
	for(i=0;i<5;i++){
		printf("%d\n",notes[i]);
	}

	return 0;
}

