#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
	    if(x<3)
	    	printf("LIGHT\n");
	    else if(x>=3 && x<7)
	    	printf("MODERATE\n");
	    else if(x>=7)
	    	printf("HEAVY\n");

}		
	return 0;
}

