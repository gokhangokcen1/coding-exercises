#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		if((x+y)%2 != 0 ||(y+z)%2 != 0 || (x+z)%2 != 0)
			printf("YES\n");
		else
			printf("NO\n");
		
	}

}


