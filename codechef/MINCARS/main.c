#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x;
		scanf("%d",&x);
		
		if(x % 4 == 0)
			printf("%d\n",x/4);
		else
			printf("%d\n",(x/4)+1);
	}

}


