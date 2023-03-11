#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);

	for(i=0;i<t;i++){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a >= b && c >= d)
			printf("%d\n",a+c);
		else if(a >= b && d >= c)
			printf("%d\n",a+d);
		else if(b >= a && c >= d)
			printf("%d\n",b+c);
		else if(b >= a && d >= c)
			printf("%d\n",b+d);
		
		
	}

}
