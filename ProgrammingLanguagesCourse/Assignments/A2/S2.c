#include<stdio.h>
#include <stdlib.h>
void kisalt(int sayi,int dizi[sayi] ,int *ptr){
	int i,j,index=0;;
	for(i=0;i<sayi;i++){
		if(dizi[i]!=0){
			*(ptr+index)=dizi[i];
			*(ptr+index+1)=i;
			index+=2;	
		}
	}
	printf("Dizinin Kisa Hali\n:");
	for(j=0;j<index;j++)
	{	
		printf("%d",*(ptr+j));
	}
}
int main(){
	int sayi,basamak=0,*ptr,i=0,j;
	printf("Dizinin Eleman Sayisini Giriniz:\n");
	scanf("%d",&sayi);
	int dizi[sayi];
	printf("Elemanlari Giriniz:\n");
	for(j = 0; j < sayi; j++)
	{
		printf("%d. Eleman:",j+1);
		scanf("%d", &dizi[j]);
		
	}
	while(i<sayi){
		if(dizi[i]!=0){
			basamak++;
			i++;
		}
		else{
			i++;
		}
	}
	printf("Rakam sayisi :%d \n",basamak);
	basamak*=basamak;
	ptr = (int*) malloc((basamak)*sizeof(int));
	kisalt(sayi,dizi,ptr);
	free(ptr);
	return 0;
}
