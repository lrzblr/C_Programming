#include <stdio.h>
/*
struct
{
 char OGR_isim[15] , ogr_soyisim[20]; 
 short OGR_yas;
 float OGR_puan; 
} ogrenci1;  //tek bir degisken �retecek tek bir structure kullanmak istiyorsan. Bunu birdaha kullanamazs�n
*/
/*
struct OGR
{
 char OGR_isim[15] , OGR_soyisim[20]; 
 short OGR_yas;
 float OGR_puan; 
} ogrenci1;  //ogrenci1,ogrenci2,ogrenciDizi[3]; de olabilirdi. Structure i tan�mlad���n yerde de�i�ken �retmelisin
*/

/*
struct OGR
{
 char OGR_isim[15] , OGR_soyisim[20]; 
 short OGR_yas;
 float OGR_puan; 
}; 
struct OGR ogrenci1,ogrenci2;  //ayni �zelliklere sahip farkli degiskenler uretilebilir. main icinde de tanimlanabilir
struct OGR ogrenci3={"ahmet","baris",20,20};   //initialization
*/


typedef struct{
 char OGR_isim[15] , OGR_soyisim[20]; 
 short OGR_yas;
 float OGR_puan; 
}OGR; // ogr tipi olu�turulur. bu tipden yeni degiskenler uretilebilir




int main()
{
   	
	OGR ogrenci1;  //typedef ile tan�mlam��san
	printf("ogrenci bilgilerini veriniz\n");
	scanf("%s %s %d %f",ogrenci1.OGR_isim,ogrenci1.OGR_soyisim,&ogrenci1.OGR_yas,&ogrenci1.OGR_puan);
	if (ogrenci1.OGR_yas<18)
	{
		ogrenci1.OGR_puan++;
		printf("%s %s isimli ogrencinin yeni puani:%f\n",ogrenci1.OGR_isim,ogrenci1.OGR_soyisim,ogrenci1.OGR_puan);
	}else{
		printf("%s %s isimli ogrencinin yeni puani:%f\n",ogrenci1.OGR_isim,ogrenci1.OGR_soyisim,ogrenci1.OGR_puan);
	}
	

	
	
	return 0;
}
