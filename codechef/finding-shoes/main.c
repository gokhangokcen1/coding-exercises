#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a<b)
	    	printf("%d\n",(a*2)-a);
	    else
	    	printf("%d\n",(a*2)-b);

			
}
	return 0;
}

