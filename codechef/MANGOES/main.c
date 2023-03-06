#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		if((z-y) != 0)
			printf("%d\n",(z-y)/x);
		else
			printf("0\n");
	}

}


