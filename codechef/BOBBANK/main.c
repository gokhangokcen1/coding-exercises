#include <stdio.h>
#include <math.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y,z,d;
	    scanf("%d %d %d %d",&x,&y,&z,&d);
	    int k = y-z; 
		printf("%d\n",x+k*d);    
		
}		
	return 0;
}	

