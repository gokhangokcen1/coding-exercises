#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int a,b,c,x;
	    scanf("%d %d %d %d",&a,&b,&c,&x);
		if((a+b)>=x || (a+c)>=x || (c+b)>=x)
	    	printf("YES\n");
	    else
			printf("NO\n");
	    
	}
	return 0;
}

