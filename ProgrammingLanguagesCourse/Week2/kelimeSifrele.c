// verilen bir kelime asagidaki sekilde sifreleniyor:
// cift indisli karakterler key kadar sonraki karakter ile,
// tek indisli karakterler key kadar onceki karakter ile,
// kelime =aile
// key    =2
// sifreli kelime=cgnc
#include <stdio.h>
int main()
{
	char kelime[10];
	int i=0,n,yon=1,key;
	scanf("%s",kelime);  //scanf("%s", &kelime[0]);
	scanf("%d",&key);
	while (kelime[i])	// while (kelime[i]!='\0')
	{
		kelime[i]=kelime[i]+yon*key;
		yon=-yon;		//yon her iterasyonda isaret degistirir. Bunun yerine if ile de cozulebilir
		i++;
	}
	printf("%s",kelime);
	return 0;
}


