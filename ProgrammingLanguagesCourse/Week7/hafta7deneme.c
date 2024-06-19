#include <stdio.h>

int main(void)
{
  int id1=5;
 
  if (id1>0) {
      int id2 = id1 * id1;
      
      printf("id1 deðiþken deðeri: %d id2 deðiþken deðeri: %d\n", id1, id2);
      id1=3;
  }
  
  printf("id1 deðiþken deðeri: %d", id1); 
  
  /* id2 deðiþkenine buradan eriþim saðlanamaz. */ 
  //printf("id2 deðiþken deðeri: %d", id2);
  
  return 0;
}
