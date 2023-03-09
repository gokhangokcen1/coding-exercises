#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		if(x % y == 0)
			printf("%d\n",(x/y)*z);
		else
			printf("%d\n",(x/y+1)*z);
			
			
	}

}


