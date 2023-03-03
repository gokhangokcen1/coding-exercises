#include <stdio.h>

int main(void) {
	// your code goes here
	    int x,y,z,d,sum=0;
	    scanf("%d %d %d %d",&x,&y,&z,&d);
	    if(x>=10)
	    	sum += 1;
	    if(y>=10)
	    	sum += 1;
		if(z>=10)
	    	sum += 1;
	    if(d>=10)
	    	sum += 1;
		
		printf("%d\n",sum);
	return 0;
}

