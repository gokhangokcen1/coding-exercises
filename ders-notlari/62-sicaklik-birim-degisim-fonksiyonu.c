#include <stdio.h>
#include <stdlib.h>

int CelToFah(int);
int FahToCel(int);

int main(){
	
	char choose;
	int number;
	printf("Fahrenheit -> celcius icin c\n");
	printf("Celcius -> fahrenheit icin f\n");
	printf("Seciminizi girin: ");
	scanf("%c",&choose);
	
	switch(choose){
		case 'c':printf("Fahrenheit degerini girin:");
				 scanf("%d",&number);
				 printf("Celcius degeri : %d\n",FahToCel(number));
				 break;	
		case 'f':printf("Celcius degerini girin:");
				 scanf("%d",&number);
				 printf("Fahrenheit degeri : %d\n",CelToFah(number));
				 break;	
		default: printf("Yanlis deger girdiniz");
}
	
	return 0;
}


int CelToFah(int c){
	return (c*9/5+32);
}

int FahToCel(int f){
	return ((f-32)*5/9);
}
