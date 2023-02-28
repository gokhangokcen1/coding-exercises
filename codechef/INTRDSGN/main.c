#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y,z,d;
	    scanf("%d %d %d %d",&x,&y,&z,&d);
		if((x+y)<=(z+d))
			printf("%d\n",(x+y));
		else
			printf("%d\n",(z+d));
					
}		
	return 0;
}	

