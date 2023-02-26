#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
		if(x%2==0)
			printf("Yes\n");
		else
			printf("No\n");
}		
	return 0;
}

