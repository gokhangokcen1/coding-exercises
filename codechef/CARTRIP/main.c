#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
		if(x<=300)
			printf("3000\n");
		else
			printf("%d\n",x*10);
		
}		
	return 0;
}	

