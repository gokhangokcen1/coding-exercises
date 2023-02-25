#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	int even = 0, odd = 0;
	
	for(i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
	    if(x%2 == 0)
	    	even++;
	    else
	    	odd++;

	}
	    if(even>odd)
	    	printf("READY FOR BATTLE\n");
	    else
	    	printf("NOT READY\n");
	return 0;
}

