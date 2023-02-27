#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if((x>y && x<z) || (x>z && x<y))
	    	printf("%d\n",x);
	    else if((y>x && y<z) || (y>z && y<x))
	    	printf("%d\n",y);
	    else if((z>x && z<y) || (z>y && z<x))
	    	printf("%d\n",z);
	    	

}		
	return 0;
}

