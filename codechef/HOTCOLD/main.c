#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
		if(x>20)
			printf("HOT\n");
		else
			printf("COLD\n");
			
}		
	return 0;
}	

