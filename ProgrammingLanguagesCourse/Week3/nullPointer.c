#include <stdio.h>
int main()
{
	int *i,*j;
	//int *ii=0,*jj=0;
	int a=5;	
	int *ii=NULL, *jj=NULL;
	printf("%p %p\n", ii,jj);
	printf("%p %p\n", i,j);
	i=&a;
	printf("%p %p\n", i,j);
	if (i==j)
		printf("i and j are same by chance\n");
	if (ii==jj)
		printf("ii and jj are always same\n");

if (ii)
printf("ii not null\n");
if (!ii)
printf("ii null");
		
	return 0;	
}


/*
a) Bu i�aret�i de�i�kenine hen�z herhangi bir ge�erli bellek adresi atanmam��sa bir i�aret�i de�i�kenini ba�latmak i�in.
b) Herhangi bir i�aret�i de�i�kenine eri�meden �nce bo� g�sterici olup olmad���n� kontrol etmek. Bunu yaparak, i�aret�i ile ilgili kodda hata i�lemeyi ger�ekle�tirebiliriz.
c) Herhangi bir ge�erli haf�za adresi iletmek istemedi�imizde bir fonksiyon arg�man�na bo� g�sterici ge�irmek i�in 
int * ptr = NULL; 
 printf("%d",*ptr); 
 printf("%lu",sizeof(void));
 
 */
