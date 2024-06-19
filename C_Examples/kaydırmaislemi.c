#include<stdio.h>
//kelime=aile key=2fireli kelmie =cgnc
//tek indis key degeri kadar önceki
//cift indis key degeri kadar sonraki
int main(){
	
	char kelime[10];
	int i=0,n,yon=1,key;
	scanf("%s",kelime);
	scanf("%d",&key);
	
	while(kelime[i]){ //while(kelime[i] != '/0')
	
	kelime[i]= kelime[i]+ yon*key;
	yon=-yon;
	i++;

	}
	
	printf("%s",kelime);
	return 0;
	
}
