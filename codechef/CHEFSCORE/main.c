#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		if(z%y == 0)
			if(x >= (z/y))
				printf("YES\n");
			else
				printf("NO\n");
		else
			printf("NO\n");
	}

}


