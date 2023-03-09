#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x;
		scanf("%d",&x);
		if((100-x) < (x-1))
			printf("RIGHT\n");
		else if((x-1) < (100-x))
			printf("LEFT\n");
			
	}

}


