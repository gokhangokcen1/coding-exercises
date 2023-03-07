#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		if(x%6 != 0)
			printf("%d\n",((x/6)+1)*y);
		else 
			printf("%d\n",(x/6)*y);
						
	}

}


