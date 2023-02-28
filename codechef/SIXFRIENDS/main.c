#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y;
	    scanf("%d %d",&x,&y);
		if((x*3)<=(y*2))
			printf("%d\n",(x*3));
		else
			printf("%d\n",(y*2));
						
}		
	return 0;
}	

