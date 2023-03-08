#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,z;
		scanf("%d",&x);
		z = ((x/3)+1)*3;
		if(x%3 == 0)
			printf("0\n");
		else
			printf("%d\n",z-x);

	}

}


