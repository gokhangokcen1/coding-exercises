#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y,z,d;
	    scanf("%d %d %d %d",&x,&y,&z,&d);
		if((x-z)<(y-d))
			printf("First\n");
		else if((y-d)<(x-z))
			printf("Second\n");
		else
			printf("Any\n");
			
			
}		
	return 0;
}	

