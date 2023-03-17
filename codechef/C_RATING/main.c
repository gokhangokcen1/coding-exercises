#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,counter = 0;
		scanf("%d %d",&x,&y);
		while(x<y){
			x = x+8;
			++counter;
		}
	printf("%d\n",counter);
	}
	

}


