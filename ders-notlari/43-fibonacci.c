#include <stdio.h>
// fibonacci i�in 1 1 2 3 5 8 13 21 34 55 89 144 233 377
int main(){
	// x'ten k���k fibonacci say�lar�
	int number,i = 1,j = 1,k;
	
	printf("give me fibonacci number below-> : ");
	scanf("%d",&number);
	printf("%d ",i);
	while(j<=number){
		printf("%d ",j);
		k = i+j;
		i = j;
		j = k;
	}
	
	//fibonacci say�s�n�n y. eleman�
	int n, b, first = 1 ,second = 1,third = 0;
	printf("\nx fibonacci number : ");
	scanf("%d",&n);
	for(b = 1; b<=n; b++){
		first = second;
		second = third;
		third = first+second;
		printf("%d ",third);
	}
	
	 

	return 0;
}
