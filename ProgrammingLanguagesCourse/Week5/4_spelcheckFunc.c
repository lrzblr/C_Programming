#include <stdio.h>
#include <string.h>
#define MAX_WORDS 50 
#define LAST_LANG 2 
char * spellCheck(char *[][MAX_WORDS], int , char *);

int main()
{
	char *dict[LAST_LANG] [MAX_WORDS] = { { "abhor", "able", "abort", "about", NULL } , 
											 { "absurde" , "accepter", "accord", "achat" , NULL } }; 

	char str[10]; 
	int language;
	printf("which language 0-1 for E-F");
	scanf("%d",&language);	
	printf("type the word");
	scanf("%s",str);
	printf ("%s",spellCheck(dict, language, str));
}

char * spellCheck(char *dict[][MAX_WORDS], int language, char *str)
{
	int diff=-1,j=0;
	
	while (dict[language][j] && (diff < 0)) 
	{
		diff = strcmp(dict[language][j],str);   //ilk kelime buyukse 1,e�itlerse 0, ikinci kelime buyukse -1
		j++;
	}
	
	j--;
	return dict[language][j];
}	


