#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h> //tip sorgulama için gerekli 

//isalnum : büyük küçük harf ve sayi
//isalpha : büyük veya küçük harf
//isdigit : sadece rakamlar
//islower : sadece kucuk harf 
//isupper : sadece buyuk harf 
//isspace : white space olup olmadýðýný kontrol eder (boþluk,tab...)
//toupper : kucuk harf to buyuk harf
//tolower : buyuk harf to kucuk harf

int main(){

//	int number;
//	printf ("Enter a number (0-255) : ");
//	scanf("%d", &number);
//	printf ("\nthe character you entered: %c\n", number);
//	if (isalnum(number))
//	     printf ("correct\n");
//	else
//	     printf ("wrong\n");

	printf("%c", toupper('a'));
	printf("%d", toupper('a'));
	

	return 0;
}

