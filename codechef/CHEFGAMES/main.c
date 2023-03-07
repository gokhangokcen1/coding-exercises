#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z,d;
		scanf("%d %d %d %d",&x,&y,&z,&d);
		if(x == 1 || y == 1 || z == 1 || d == 1)
			printf("OUT\n");
		else
			printf("IN\n");
			
	}	

}
