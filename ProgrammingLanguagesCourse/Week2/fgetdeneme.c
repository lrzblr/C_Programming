#include <stdio.h>

int main()
{	

  char cdizi[6];
  
  printf("karakter dizisi girin") ;
  
  fgets(cdizi, 6, stdin);
  
  printf(cdizi);

  return 0;
}

