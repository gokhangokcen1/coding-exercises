#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		if(x>z)
			printf("0\n");
		else if((x+y)<=z)
			printf("2\n");
		else
			printf("1\n");
			
	}
	
	

}
