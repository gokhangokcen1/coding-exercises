#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int x;
		scanf("%d",&x);
		int number = 0;
	
		while(x != 0){
			if(x%10 == 4){
				++number;
				x /= 10;
			}
				
			else
				x /= 10;
			
		}
		printf("%d\n",number);

	}

}


