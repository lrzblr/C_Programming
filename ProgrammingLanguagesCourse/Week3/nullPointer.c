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
a) Bu iþaretçi deðiþkenine henüz herhangi bir geçerli bellek adresi atanmamýþsa bir iþaretçi deðiþkenini baþlatmak için.
b) Herhangi bir iþaretçi deðiþkenine eriþmeden önce boþ gösterici olup olmadýðýný kontrol etmek. Bunu yaparak, iþaretçi ile ilgili kodda hata iþlemeyi gerçekleþtirebiliriz.
c) Herhangi bir geçerli hafýza adresi iletmek istemediðimizde bir fonksiyon argümanýna boþ gösterici geçirmek için 
int * ptr = NULL; 
 printf("%d",*ptr); 
 printf("%lu",sizeof(void));
 
 */
