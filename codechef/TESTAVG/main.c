#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		if((x+y)/2 >= 35 && (x+z)/2 >= 35 && (y+z)/2 >= 35)
			printf("Pass\n");
		else
			printf("Fail\n");
		
	}	

}
