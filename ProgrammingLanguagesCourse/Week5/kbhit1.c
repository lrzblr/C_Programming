#include <stdio.h>
#include <conio.h>

int main(void)
{
  for ( ; ; ) {
       printf("%d ", 21);
       if (kbhit()) break;  // 1
  }

  return 0;
}

