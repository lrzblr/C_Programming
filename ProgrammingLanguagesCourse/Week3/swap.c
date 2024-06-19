//swap
#include <stdio.h>


void swap (int *sayi1, int *sayi2){
	int temp= *sayi1;
	*sayi1=*sayi2;
	*sayi2=temp;
	printf("ilk deger adres %d\n",sayi1);
	printf("son deger adres %d\n",sayi2);
	
}

int main(){
	int x= 15;
	int y= 43;
	
	printf("ilk deger %d\n",x);
	printf("son deger %d\n",y);
	
	printf("ilk deger adres %d\n",&x);
	printf("son deger adres %d\n",&y);
	
	
	swap(&x,&y);
	
	printf("yeni ilk deger %d\n",x);
	printf("yeni son deger %d\n",y);
	
	printf("ilk deger adres %d\n",&x);
	printf("son deger adres %d\n",&y);
}

