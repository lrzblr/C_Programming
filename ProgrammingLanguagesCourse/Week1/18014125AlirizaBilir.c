#include <stdio.h>
#include <string.h>
 
void kontrolPalindrom(char [], int,int);
int main()
{
    char kelimePal[25];
    printf("\n\n Recursion : Girilen kelime Palindrom mu degil mi? :\n");
	printf("----------------------------------------------------------\n");	
    printf(" Bir kelime giriniz : ");
    scanf("%s", kelimePal);
    int uzunluk=strlen(kelimePal)-1;
    kontrolPalindrom(kelimePal, 0,uzunluk); // kelime ve index bilgisini fonksiyona gönderir
    return 0;
}

void kontrolPalindrom(char kelime[],int index,int uzunluk){
	
	if(kelime[index]==kelime[uzunluk]){
		if(uzunluk==index | uzunluk==index+1){
			printf("Kelimeniz polindrom");
		}
		kontrolPalindrom(kelime,index++,uzunluk--);
	}
	else{
		printf("Kelime polindrom degil");
	}
}


