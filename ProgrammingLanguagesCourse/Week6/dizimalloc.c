#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *pdizi[4];
  int id;

  // Bellek tahsisi
  for (id=0; id<5; id++) {
       pdizi[id] = (char *) malloc( 10 * sizeof(char));
     
  }

printf("%d\n",sizeof(pdizi[0]));

  // Dizi atama
  //for (id=0; id<5; id++) {
       strcpy(pdizi[0], "Karakter ");
       strcpy(pdizi[1], "Karakter 2");
       strcpy(pdizi[2], "Karakter 3");
       strcpy(pdizi[3], "Karakter 4");
       strcpy(pdizi[4], "Karakter 5");
  //}
  
  // Yazd?rma
  for (id=0; id<5; id++) {
       printf("%s\n", pdizi[id]);
      
       printf("%d\n", (pdizi+id));
       printf("%d\n", *(pdizi+id));
  }
  
printf("%c\n",  *(*(pdizi+1)+3) ) ;

  // Bellek bo?altma
  for (id=0; id<5; id++) {
       free(pdizi[id]);
  }

  return 0;
}

