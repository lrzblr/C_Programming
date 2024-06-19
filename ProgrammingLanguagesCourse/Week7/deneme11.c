#include <stdio.h>
#include <stdlib.h>

void fonk(void);

int gid = 287; // global int deðiþken tanýmlamasý

int main(void)
{
  printf("deneme1.c gid deðiþken deðeri: %d\n", gid);

  fonk(); // deneme2.c dosyasýndaki fonk() fonksiyonuna çaðrý

  return 0;
}
