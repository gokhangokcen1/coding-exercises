#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
		if(x<4)
			printf("MILD\n");
		else if(x>=4 && x<7)
			printf("MEDIUM\n");
		else
			printf("HOT\n");

}		
	return 0;
}	

