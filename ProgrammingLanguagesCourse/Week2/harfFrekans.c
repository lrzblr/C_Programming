// verilen bir paragraftaki küçük harflerin frekanslarýný bulan programý yazýnýz
#include <stdio.h>
int main()
{
	static int counter[26];
	int i,j,indis,sum=0,normalized;
	static char histmat[100][26];
	char text[100];
	printf("paragrafi giriniz\n");
	//gets(text);  //bu kullanim da uygun
	scanf("%s",text); 
	i=0;
	while (text[i]!=0) //null karaktere rastlayana kadar devam 
	//while (text[i]!='\0') //bu kullanim da legal
	{
		if ((text[i]<='z') && (text[i]>='a'))  //eger kucuk harf ise
		{
			indis=text[i]-'a';				   //kacinci harf oldugunu bulalim
			counter[indis]++;				   //ilgili indisi arttiralim
		}
	i++;
	}
	for (i=0;i<26;i++) //tum harflerin kacar kez tekrar ettigini bastiralim
		printf("%c:%d\n",'a'+i,counter[i]);
	
	return 0;
}
