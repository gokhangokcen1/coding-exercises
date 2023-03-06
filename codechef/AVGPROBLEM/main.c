#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		float x,y,z;
		scanf("%f %f %f",&x,&y,&z);
		if(((x+y)/2) > z)
			printf("YES\n");
		else			
			printf("NO\n");
	}
	
	

}
