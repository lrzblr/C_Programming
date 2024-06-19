#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *ip, id;

  ip = (int *) malloc(5 * sizeof(int));

  for (id=0; id<5; id++) {
       *(ip+id) = id+1;
       printf("%p adresindeki de?er: %d\n", (ip+id), *(ip+id));
  }

  ip = (int *) realloc(ip, 10 * sizeof(int));

  printf("Geni?letilmi? bellek de?erleri:\n");

  for (  ; id<15; id++) { // Burada id de?i?ken de?eri 5 olarak ba?lar.
       *(ip+id) = id+1;
       printf("%p adresindeki de?er: %d\n", (ip+id), *(ip+id));
  }

  free(ip);

  return 0;
}

