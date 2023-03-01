#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y;
	    scanf("%d %d",&x,&y);
		if((x*100) < (y*10))
			printf("Disposable\n");
		else
			printf("Cloth\n");
		
}		
	return 0;
}	

