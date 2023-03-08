#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		if((x+y)%2 == 0)
			printf("%d\n",(x+y)/2);
		else
			printf("-1\n");
	}

}


