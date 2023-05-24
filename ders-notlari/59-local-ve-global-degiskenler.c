#include <stdio.h>
void Increase();
void Decrease();
int x = 7; //global variable

int main(){
	int y = 5; //local variable
	printf("y : %d\n",y);
	printf("x:%d\n",x);
	Increase();
	printf("x:%d\n",x);
	Decrease();
	Decrease();
	Decrease();
	printf("x:%d\n",x);



	return 0;
}

void Increase(){
	x++;
}

void Decrease(){
	x--;
}
