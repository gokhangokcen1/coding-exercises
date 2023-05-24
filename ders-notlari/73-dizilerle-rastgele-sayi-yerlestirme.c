#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int i,dice,howMany[7] = {0,0,0,0,0,0,0};
	srand(time(NULL)); //her seferinde farklý sayý üretmek için bu gerekir
	for(i=1;i<=100;i++){
		dice = rand()%6+1; //1-6 arasý rastgele sayi
		howMany[dice]++;
	}
	
	printf("Zar Numarasi\t Kac defa geldi\n");
	for(i=1;i<7;i++){
		printf("%d\t\t%d\n",i,howMany[i]);
	}
	return 0;
}

