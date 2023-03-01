#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
		if((x+y+z)>=100 && (x>=10 && y>=10 && z>=10))				
			printf("PASS\n");
		else
			printf("FAIL\n");
}		
	return 0;
}	

