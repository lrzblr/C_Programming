#include <stdio.h>

int main(void)
{
  int id1=5;
 
  if (id1>0) {
      int id2 = id1 * id1;
      
      printf("id1 de�i�ken de�eri: %d id2 de�i�ken de�eri: %d\n", id1, id2);
      id1=3;
  }
  
  printf("id1 de�i�ken de�eri: %d", id1); 
  
  /* id2 de�i�kenine buradan eri�im sa�lanamaz. */ 
  //printf("id2 de�i�ken de�eri: %d", id2);
  
  return 0;
}
