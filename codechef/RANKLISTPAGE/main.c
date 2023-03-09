#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x;
		scanf("%d",&x);
		if(x%24 == 0)
			printf("%d\n",x/24);
		else
			printf("%d\n",(x/24)+1);
	}

}


