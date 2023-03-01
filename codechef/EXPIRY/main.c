#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
		if((y*z)>=x)
			printf("Yes\n");
		else
			printf("No\n");
}		
	return 0;
}	

