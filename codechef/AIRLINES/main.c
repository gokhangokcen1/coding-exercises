#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if(10*x>=y)
	    	printf("%d\n",(y*z));
	    else
	    	printf("%d\n",(x*10*z));
	    
		
}		
	return 0;
}	

