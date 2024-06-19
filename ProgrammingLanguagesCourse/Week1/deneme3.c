
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

int bagaj, el, miktar,bagajlimit,ellimit,x;
//x=abs(5-8);
//printf("%d",x);

bagaj= 18;
el =9;
bagajlimit= 15;
ellimit = 8 ;

miktar = ((bagaj - bagajlimit) + (el - ellimit))*5;

printf("odemeniz gereken miktar: % d TLdir", miktar);


return 0;
}

