#include <stdio.h>
#include <stdlib.h>

int count;
extern void writeextern();
 
int main() {
   count = 6;
   writeextern(); //yazdirma islemini prog


return 0;

}

