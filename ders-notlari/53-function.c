#include <stdio.h>

	void myMessage(){
		printf("Now I can write a function\n");
	}
	void nameList(char name[], int age){
		printf("%s. You are %d years old\n",name,age);
	}

int main(){

	nameList("Fehmi",32);
	nameList("Emrullah",34);
	nameList("Murat",32);


	return 0;
}

