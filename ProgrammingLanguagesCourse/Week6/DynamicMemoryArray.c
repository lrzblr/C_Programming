// DYNAMIC MEMORY ALLOCATION
#include <stdio.h>
#include <stdlib.h>
void OgrenciAl (int *, int, int );
float OrtalamaBul (int *, int );
void OgrListele (int *, int );
int * YerGenisletv2 (int *, int , int );
int * YerAc(int);
int main()
{
	int *OgrNotDizi,*OgrNotDizi2;
	int i,n,m;
	float ort;
	printf("Ogrenci sayisini veriniz\n");
	scanf("%d",&n);
	
	//OgrNotDizi = (int *) calloc( n , sizeof(int) ); 
	OgrNotDizi=YerAc(n);
	/* 
		MALLOC ILE YER AYRILIRSA
		OgrNotDizi = (int *) malloc( n * sizeof(int) ); 
	
	*/
	OgrenciAl (OgrNotDizi,0,n); 
    ort=OrtalamaBul (OgrNotDizi, n);
	printf("ortalama:%f\n",ort);
   	OgrListele (OgrNotDizi, n);
   	printf("Kac ogrenci eklemek istersiniz ");
	scanf("%d",&m);
	OgrNotDizi2=YerGenisletv2(OgrNotDizi,n,m);
	if (OgrNotDizi2 == NULL)
	{
		printf("yer genisletilemedi\n");
		exit (0);
	}
	else
		OgrenciAl (OgrNotDizi2,n,m);
	
	ort=OrtalamaBul (OgrNotDizi2, n+m);
	printf("yeni ortalama:%f\n",ort);
    OgrListele (OgrNotDizi2, n+m);
    free (OgrNotDizi2);
     
	return 0;
}

void OgrenciAl (int *ogrList, int basla, int sayi)
{
	int i;
	printf("ogrenci notlarini giriniz\n");
	for( i=basla; i < basla+sayi; i++) 
		scanf ( "%d", &ogrList[i] );
	
}

float OrtalamaBul (int *ogrList, int n)
{
	int i,toplam=0;
	for( i=0; i < n; i++) 
		toplam += *(ogrList + i);
	
	return (float)toplam/n;
}

void OgrListele (int *ogrList, int n)
{
	int i;
	for( i=0; i < n; i++) 
		printf ( "%d  ", ogrList[i] );
	printf("\n");
}

int* YerGenisletv2 (int *ogrList, int n, int m)
{
	int *ogrListNew;
	ogrListNew = realloc(ogrList, (m+n)*sizeof(int) ); 
	return ogrListNew;
}

int* YerAc (int n)
{
	int *dizi;
	dizi = (int *) malloc( n * sizeof(int) ); 
	return dizi;
}
