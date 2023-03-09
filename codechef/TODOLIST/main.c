#include <stdio.h>

int main(){
    int i,t;
	scanf("%d\n",&t);  
	
	for(i=0;i<t;i++){
		int num[1000];
        int count=0;
        int j,n;
        scanf("%d\n",&n);
        for(j=0;j<n;j++)
        {
        	scanf("%d\n",&num[i]);
            if(num[i]>=1000)
            {
                count++;
            }
        }
			printf("%d\n",count);
	}

        
}


