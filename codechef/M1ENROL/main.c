#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y;
	    scanf("%d %d",&x,&y);
		if(x<y)
			printf("%d\n",y-x);
		else
			printf("0\n");
}		
	return 0;
}	

