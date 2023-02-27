#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x,y;
	    scanf("%d %d",&x,&y);
		if(x>y)
			printf("LOSS\n");
		if(x<y)
			printf("PROFIT\n");
		if(x==y)
			printf("NEUTRAL\n");

}		
	return 0;
}

