#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y;
		scanf("%d",&x);
		y = 50 * x;
		printf("%d\n",y-(y*20)/100-(y*20)/100-(y*30)/100);
	}	

}
