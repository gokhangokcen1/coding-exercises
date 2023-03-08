#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x,y,z;
		scanf("%d %d",&x,&y);
		if(y>x)
			printf("0\n");
		else
			z = (x-y); 
			if(z%4 == 0)
				printf("%d\n",z/4);
			else 
				printf("%d\n",(z/4)+1);
	}

}


