#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x;
		scanf("%d",&x);
		if(((x*10)/100) > 100)
			printf("%d\n",((x*10)/100));
		else
			printf("100\n");
	}
	
	

}
