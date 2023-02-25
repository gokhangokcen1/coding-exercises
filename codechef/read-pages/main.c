#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		int n,x,y;
		scanf("%d %d %d",&n,&x,&y);
		if(n<=(x*y))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

