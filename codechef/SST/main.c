#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		if(x*10 > y*5)
			printf("FIRST\n");
		else if(y*5 > x*10)
			printf("SECOND\n");
		else
			printf("ANY\n");
			
		
	}

}


