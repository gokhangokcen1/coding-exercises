#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y;
	    scanf("%d %d",&x,&y);
		if(y>x)
			printf("%d\n",(x+(y-x)*2));
		else
			printf("%d\n",y);
}		
	return 0;
}	

