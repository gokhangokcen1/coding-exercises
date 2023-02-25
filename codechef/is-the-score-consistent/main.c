#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	int even = 0, odd = 0;
	
	for(i=0;i<t;i++){
	    int a,b,c,d;
	    scanf("%d %d\%d %d",&a,&b,&c,&d);
	    if(a<=c && b<=d)
	    	printf("POSSIBLE\n");
	    else
	    	printf("IMPOSSIBLE\n");
	}
	return 0;
}

