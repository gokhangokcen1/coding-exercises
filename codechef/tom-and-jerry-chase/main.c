#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		if(y>x)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}
