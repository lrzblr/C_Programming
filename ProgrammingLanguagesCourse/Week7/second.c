#include <stdio.h>
 
extern int count;
 
void writeextern(void) {
   printf("count is %d\n", count+1);

}
