#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *ip;

  // int veri türü boyutu kadar kadar bellek tahsisi
  ip = (int*) malloc(3*sizeof(int));
  *ip = 126;
  *(ip+2) = 127;
  printf("Tahsis edilen bellek adres ba?lang?c?: %p\n", ip);
  printf("Tahsis edilen bellekteki de?i?ken de?eri: %d\n", *ip);
  
printf("Tahsis edilen bellek adres ba?lang?c?: %p\n", ip+2);
  printf("Tahsis edilen bellekteki de?i?ken de?eri: %d\n", *(ip+2));
  
  free(ip);
  
 printf("Tahsis edilen bellek adres ba?lang?c?: %p\n", ip);
 printf("Tahsis edilen bellekteki de?i?ken de?eri: %d\n", *ip);
 printf("Tahsis edilen bellekteki de?i?ken de?eri: %d\n", *(ip+2));
  return 0;
}

