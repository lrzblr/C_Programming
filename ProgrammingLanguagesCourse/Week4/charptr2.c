// C program to illustrate 
// char* const p
#include<stdio.h>
#include<stdlib.h>
void yazdir(char *ptr){
	int i;
	for(i=0;i<5;i++){
		printf("%c\t",*ptr+i);
	}
}

char *basamak_yerlestir(char *dizi,int sayi,int basamak){
	int rakam,i=0,j;
	while(sayi != 0){
		rakam = sayi % 10;
		printf("%d",rakam);
		dizi[i]	== rakam;
		sayi = sayi/10;
		i++;
	}
	return dizi;
}


int main(){
	char dizi[5]={'1','2','3','4','5'};
	char *ptr = dizi;
	basamak_yerlestir(ptr,12345,5);
	return 0;
}
