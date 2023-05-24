#include <stdio.h>

int main(){
	int OBEB = 0,OKEK = 0, x,y,smallNumber,i;
	printf("iki sayi gir: ");
	scanf("%d%d",&x,&y);
	
	if(x<y)
		smallNumber = x;
	else
		smallNumber = y;
		
	for(i=1; i<=smallNumber;i++){
		if((y % i == 0) && (x % i == 0))
			OBEB = i;
	}
	if(OBEB != 0){
		OKEK = OBEB*x/OBEB*y/OBEB;
		printf("%d %d sayilarinin OBEB'i %d",x,y,OBEB);
		printf("%d %d sayilarinin OKEK'i %d",x,y,OKEK);
	}
	else{
		OKEK = x*y;
		printf("Bu sayilarin OBEB'i yoktur.\n");
		printf("Bu sayilarin OKEK'i %d",OKEK);
	}




	return 0;
}

