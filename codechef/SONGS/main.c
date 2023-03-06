#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		if(y>x)
			printf("0\n");
		else
			printf("%d\n",x/(y*3));
	}
	

}
