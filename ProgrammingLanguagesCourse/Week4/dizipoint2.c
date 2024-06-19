#include <stdio.h>
int main() {

int i,j;
int (*p)[3];
int ar[2][3]= { {0,1,2}, {3,4,5} };
p=ar;

for (i=0; i<2;i++)
for (j=0; j<3;j++)
printf("adres: %p %p deger: %d %d  \n", *p,*(p+i)+j, **p, *(*(p+i)+j) );

printf("adres: %d %d  deger: %d %d  \n", p, *p, p+1, *(p+1));


for (i=0; i<2;i++)
for (j=0; j<3;j++)
printf("adres:  deger: %d %d %d \n", ar[i][j], *(ar[i]+j), *(*(ar+i)+j) );
 
printf("%p\n%p\n%p\n%p\n%d ", ar, ar[0], &ar[0], &ar[0][0], ar[0][0] );

return 0;

}
