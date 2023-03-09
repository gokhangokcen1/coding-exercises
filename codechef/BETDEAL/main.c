#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,a,b;
		scanf("%d %d",&x,&y);
		a = 100-x;
		b = 2*(100*(100-y)/100);
		if(a<b)
			printf("FIRST\n");
		else if(a>b)
			printf("SECOND\n");
		else
			printf("BOTH\n");
	}

}


