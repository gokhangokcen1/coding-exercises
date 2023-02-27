#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y;
	    scanf("%d %d",&x,&y);
		if((x*2) > (y*5))
			printf("Chocolate\n");
		else if((x*2) == (y*5))
			printf("Either\n");
		else if((x*2) < (y*5))
			printf("Candy\n");
			    	

}		
	return 0;
}

