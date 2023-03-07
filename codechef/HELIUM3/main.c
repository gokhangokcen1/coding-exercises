#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z,d;
		scanf("%d %d %d %d",&x,&y,&z,&d);
		if((x*y) <= (z*d))
			printf("Yes\n");
		else
			printf("No\n");
	}	

}
