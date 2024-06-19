#include <stdio.h>

int main(void)
{
  char cd1, cd2;

  printf("Iki karakter girip ENTER tusuna basiniz: ");

  cd1 = getchar();
  cd2 = getchar();

  printf("Girdiginiz karakterler: %c %c", cd1, cd2);

  return 0;
}

