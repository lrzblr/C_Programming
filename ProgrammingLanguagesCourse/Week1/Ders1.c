#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	printf("Merhaba Dunya\n");  // \n
	
	printf("Merhaba Mars\n");

	
	char kitapadi[20]= "1984\n";
	char kitapyazar[15]="George Orwell \n";
	
	printf("%s\n",kitapadi);
	printf("%s",kitapyazar);
	

	char ad, soyad[10], yas[2], meslek[10];
	
	printf("\n adiniz: ");
	scanf("%s", &ad);
	
	printf("soyadiniz: ");
	scanf("%s", &soyad);
	

	printf("Adi: %s - Soyad,: %s\n", ad,soyad);
	//printf("Yasi: %s", yas);
	
	
	return 0;
}
