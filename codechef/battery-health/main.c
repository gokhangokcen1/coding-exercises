#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		int x;
		scanf("%d",&x);
		if(x>=80)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}

