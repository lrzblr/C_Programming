#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *cp, *cp2="bilimleri";

  cp = (char*) malloc(10);
  
 printf("%p\n", cp);
 printf("%s\n", cp);
 

  if (cp!=NULL) {
  	
strcpy(cp, "Bilgisayar ");
strcat(cp, "bilimleri");

printf("%s\n", cp);

  printf("%s\n", cp2);
 
  }


  free(cp);
  
printf("%s", cp);

  return 0;
}

