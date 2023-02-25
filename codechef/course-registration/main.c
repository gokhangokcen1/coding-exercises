#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		int n,m,k;
		scanf("%d %d %d",&n,&m,&k);
		if(m>=(n+k))
			printf("YES\n");
		else
			printf("NO\n");
		
	}
	return 0;
}

