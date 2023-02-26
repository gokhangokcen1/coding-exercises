#include <stdio.h>
#include <math.h> /*for use abs*/

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y;
	    scanf("%d %d",&x,&y);
		printf("%d\n",abs(x-y));
}
	return 0;
}

