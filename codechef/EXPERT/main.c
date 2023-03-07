#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		if((y*100)/x >= 50)
			printf("YES\n");
		else
			printf("NO\n");
		
	}	

}
