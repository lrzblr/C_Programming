#include <stdio.h>
#include <string.h>
#define MAX_WORDS 50 
#define LAST_LANG 2 
											 
int main()
{
	char *dict[LAST_LANG] [MAX_WORDS] = {{ "abhor", "able", "abort", "about", NULL } , 
										 { "absurde" , "accepter", "accord", "achat" , NULL } }; 

	char str[10]; 
	int diff=-1,language,j=0;
	printf("which language 0-1 for E-F");
	scanf("%d",&language);	
	printf("type the word");
	scanf("%s",str);
	
	// dizi sonuna ula�mad���n ve arad���n kelime sozlukteki s�radaki kelimeden buyuk oldugu surece don
	// diyelim ki language=0 iken ablu kelimesini ar�yorsun. abort'a gelince aramay� b�rakabilirsin
	while (dict[language][j] && (diff < 0)) 
	{
		diff = strcmp(dict[language][j],str);  
		//strcmp ilk kelime buyukse 1,e�itlerse 0, ikinci kelime buyukse -1 dondurur
		j++;
	}
	
	if (diff==0)
		printf("match");
	else
	//dict[language][j] == NULL ise bir onceki kelimeyi oner ya da
	//diff > 0 ise str'den buyuk olan ilk kelimeyi oner
	{
		j--;	
		printf("%d best match:%s",j,dict[language][j]);
	}
	
}
