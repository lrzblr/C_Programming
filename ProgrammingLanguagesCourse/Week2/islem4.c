#include<stdio.h>

// 

int main(){
	
	int sayi1, sayi2, secim;
	printf("Birinci sayiyi girin: ");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi girin: ");
	scanf("%d",&sayi2);
	
	printf("Bir islem seciniz:\n 1- Toplama \n 2-Cikarma \n 3-Carpma \n 4- Bolme\n");	
	scanf("%d",&secim);
	
	switch(secim){
		case 1: printf("%d\n", sayi1+sayi2);break;
		case 2: printf("%d\n", sayi1-sayi2);break;
		case 3: printf("%d\n", sayi1*sayi2);break;
		case 4: printf("%f\n", (float)sayi1/sayi2);break;
		default : printf("hatali secim yaptiniz");break;
	}

}

