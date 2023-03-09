#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		if(x>=z && x<=y || z<=y &&  x<=z )
			printf("Yes\n");
		else
			printf("No\n");
		
	}

}


