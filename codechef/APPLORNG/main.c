#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,z;
	scanf("%d\n%d %d",&x,&y,&z);
	if((y+z)<=x)
	    printf("Yes\n");
	else   
	    printf("No\n");
	
	return 0;
}

