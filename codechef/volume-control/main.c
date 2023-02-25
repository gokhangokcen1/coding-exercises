#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		int x,y,z;
		scanf("%d %d",&x,&y);
		z = x-y;
		if(z<0)
			printf("%d\n",z*(-1));
		else
			printf("%d\n",z);
	}
	return 0;
}

