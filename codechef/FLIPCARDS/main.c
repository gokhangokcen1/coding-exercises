#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		if(y>=x-y)
			printf("%d\n",x-y);
		else
			printf("%d\n",y);
			
	}

}
