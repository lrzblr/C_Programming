#include<stdio.h>
//kucuk harf say�s�n� bulan program
int main(){
	static int counter[26];
	int i,j,indis;
	char text[100];
	printf("Paragraf� Giriniz: \n");
	scanf("%s",text);
	
	while(text[i]!=0){
		if((text[i])<='z'&& (text[i]>= 'a')){
			indis = text[i]- 'a';
			counter[indis]++;
		}
		i++;
		
		
	}
	for(i=0;i<26;i++){
		printf("%c : %d\n",'a'+i,counter[i]);
	}
	return 0;
	
	
}
