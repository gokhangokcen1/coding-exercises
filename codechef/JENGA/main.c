#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		if(x == y)
			printf("YES\n");
		else if(y % x == 0)
			printf("YES\n");
		
		else		
			printf("NO\n");
		
	}

}
