#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "time.h"

int main(){
	
	int randomNumber, guessNumber, guessCount, score = 100;
	srand(time(NULL));
	randomNumber = (rand()%100+1);
	printf("1-100 arasinda rastgele bir sayi tuttum\n");
	printf("Tahmin Et!\n");
	
	while(guessNumber != -1){
		printf("Tahmin sayisini gir: ");
		scanf("%d",&guessNumber);
		if(guessNumber == -1) break;
		if(guessNumber<1 || guessNumber>100){
			printf("1-100 demistim!\n");
			continue;
		}
		guessCount++;
		if(guessNumber == randomNumber){
			printf("Tebrikler. %d. seferde bildin\n",guessCount);
			break;
		}else{
			if(guessNumber > randomNumber){
				printf("Daha kucuk bir sayi girmelisin\n");
			}else{
				printf("Daha buyuk bir sayi girmelisin\n");
			}
				score -= 10;
		}//bilmedigi zaman calisacak else
		
	}//while end
	printf("\nPuanin 100 uzerinden %d\n",score <0 ? 0: score);
	
	return 0;
}

