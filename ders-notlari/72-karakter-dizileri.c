#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	char name[30] = "Gokhan";
	
	printf("Enter your name:");
	gets(name); //scanf bosluga kadar al�yordu bu tamam�n� al�yor
		
	printf("\nYour name is %s\n",name);
	return 0;
}

