#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str1[20]; 
	char str2[10];
	//char str3[10];
	int i,n;
	// string uzunlugu bulma
	printf("bir kelime veriniz\n");
	scanf("%s",str1);
	i=0;
	while (str1[i])	//	while (str1[i]!='\0')
			i++;
	printf("string uzunlugu %d\n",i);

	// bir string'i digerine kopyalama
	for (i=0;str1[i];i++)
		str2[i]=str1[i];
	str2[i]='\0';
	printf("kopyalanan string:%s\n",str2);
	
	// bir string'i digerine kopyalama v2
	for (i=0;*(str1+i);i++)
		*(str2+i)=*(str1+i);
	*(str2+i)='\0'; //str2[i]='\0';
	printf("kopyalanan string:%s\n",str2);
	
	//strcpy(str3, str1);
	//printf("kopyalanan string:%s\n",str3);
	
	return 0;
}


/*
strcpy()
strncpy() //Copies the first num characters of source to destination.
strcat()  //Appends a copy of the source string to the destination string
strncat() //Appends the first num characters of source to destination
strcmp()  
strncmp()
strchr()  //Locate first occurrence of character in strin
strcspn()
strpbrk()
strrchr()
strspn()
strstr()
strtok()
strerror() //A pointer to the error string describing error errnum.
strlen()
*/
