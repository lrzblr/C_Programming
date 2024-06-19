#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *cp1 = "ilk karakter dizisi";
  char *cp2, *cp3;
  char cdizi[30];

  cp2 = "ikinci karakter dizisi";
  
printf("%d\n%d\n", cp1, cp2);

  cp3 = (char*) malloc(50);
  strcpy(cp3, "Üçüncü karakter dizisi"); // malloc() ve free() fonksiyonlar? kullan?lmad???nda hata verir.
  strcpy (cdizi, "Dördüncü karakter dizisi");
printf("%d\n%d\n", cp3, cdizi);

  printf("%s\n%s\n%s\n%s", cp1, cp2, cp3, cdizi);

  free(cp3);
  
  printf("%s\n%s\n%s\n%s", cp1, cp2, cp3, cdizi);

  return 0;
}


