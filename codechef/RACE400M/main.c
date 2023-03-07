#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		if(x<y && x<z)
			printf("Alice\n");
		else if(y<x && y<z)
			printf("Bob\n");
		else
			printf("Charlie\n");
	}

}
