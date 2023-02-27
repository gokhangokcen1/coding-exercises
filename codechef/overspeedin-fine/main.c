#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
	    if(x<=70)
	    	printf("0\n");
	    else if(x>70 && x<=100)
	    	printf("500\n");
	    else if(x>100)
	    	printf("2000\n");
			
}		
	return 0;
}	

