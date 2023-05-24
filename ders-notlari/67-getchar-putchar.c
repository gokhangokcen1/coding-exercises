#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//getch direkt olarak tuþa basýldýðýnda veriyi alýr
//getchar tuþa basýldýktan sonra enter'a basýlmasý gerekir
//putch ekrana bir karakter yazdýrmak için kullanýlýr (c fonk deðil)
//putchar (c fonksiyonu)
int main(){
	
//	char myKey;
//    printf("Bir tusa basiniz:");
//    myKey = getchar();
//    printf("%c tusuna bastiniz\n",myKey);
//    printf("tusun ASCII kodu: %d",myKey) ;

//	putch (65);
//	 putch (32);
//	  putch (66);
//	 putch (32); ;
//	  putch (67);
//	 putch (32);
//	  putch (68);
//	putch (32);
	int i;
	for(i = 65; i<=90;i++){
		putchar(i);
	putchar(32);
	}

    return 0;
}


