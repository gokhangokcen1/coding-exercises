#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y;
	    scanf("%d %d",&x,&y);
		if(x<y)
			printf("REPAIR\n");
		else if(y<x)
			printf("NEW PHONE\n");
		else
			printf("ANY\n");	
			
}		
	return 0;
}	

