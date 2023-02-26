#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y,a;
	    scanf("%d %d %d",&x,&y,&a);
	    if(a>=x && y>a)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}

