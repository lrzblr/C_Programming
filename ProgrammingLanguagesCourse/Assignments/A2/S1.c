#include<stdio.h>
#include<stdlib.h>

void yazdir(char *dizi,int basamak){
	int j;
	printf("Basamaklar:\n");
	for(j=basamak;j>=0;j--){
		printf("%c\t",*(dizi+j));
	}
}

char *basamak_yerlestir(char *ptr,int sayi,int basamak){
	int rakam,i=0;
	char dizi[5];
	while(sayi != 0){
		rakam = sayi % 10;
		dizi[i]=rakam+'0';
		i++;
		sayi = sayi/10;
	}
	ptr=dizi;
	return ptr;
}

char *bellek_ac(int basamak){
	int i;
	char *dizi;
	for(i=0;i<basamak;i++){
		dizi = (char* ) calloc(basamak , sizeof(char));
	}
	free(dizi);
	return dizi;
}

int basamak_sayisi(int sayi){
	int basamak=0;
	while(sayi!= 0){
		sayi=sayi/10;
		basamak++;
	}
	return basamak;
}

int main()
{	
	int sayi;
	printf("Bir Sayi Girin:\n");
	scanf("%d",&sayi);
	printf("Basamak Sayisi:%d \n",basamak_sayisi(sayi));
	int basamak = basamak_sayisi(sayi);
	char *dizi = bellek_ac(basamak);
	dizi=basamak_yerlestir(dizi,sayi,basamak);
	yazdir(dizi,basamak);
	return 0;
	
}
