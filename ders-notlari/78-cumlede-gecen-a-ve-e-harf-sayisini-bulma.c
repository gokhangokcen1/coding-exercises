#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void countCharacters(char x[]);
int main(){
	char x[100];
	int i = 0;
	
	printf("Enter a sentence: ");
	
	do{
		scanf("%c",&x[i]);
		i++;
	}while(x[i-1] != '.'); //i-1 ��nk� son tu� 'enter' 

	countCharacters(x);
	return 0;
}

void countCharacters(char x[]){
	int i, aCount = 0, eCount = 0;
	for(i=0;x[i] != '.';i++){
		if(x[i] == 'A' || x[i] == 'a')
			aCount++;
		if(x[i] == 'E' || x[i] == 'e')
			eCount++;
	}
	printf("A/a:%d\n",aCount);
	printf("E/e:%d",eCount);
}
