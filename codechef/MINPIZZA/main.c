#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		int z = (x*y)/4;
		if((x*y)%4 != 0)
			printf("%d\n",z+1);
		else 
			printf("%d\n",z);
						
	}

}


