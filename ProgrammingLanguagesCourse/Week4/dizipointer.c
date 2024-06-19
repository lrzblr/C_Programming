#include <stdio.h>
int main() {

int i,j;

char dizi[5]= {1,2,3,4,5};

for (i=0; i<5;i++){
	printf("adres: %p  deger: %d \n", &dizi[i], dizi[i]);
}
	

for (i=0; i<5;i++){
	printf("adres: %p  deger: %d \n", dizi+i, *(dizi+i));
}
	

int ar[2][3]= { 0,1,2 , 3,4,5 };

for (i=0; i<2;i++)
for (j=0; j<3;j++)
	printf("adres: %p  deger: %d \n", &ar[i][j], ar[i][j] );

for (i=0; i<2;i++)
for (j=0; j<3;j++)
	printf("deger: %d %d %d \n", ar[i][j], *(ar[i]+j), *(*(ar+i)+j) );

printf("%p\n%p\n%p\n%p\n%d\n ", ar, ar[0], &ar[0], &ar[0][0], ar[0][0] );
printf("%p\n%p\n%p\n%p\n ", *ar, ar+0, *(ar+0), *(ar+0)+1 );

return 0;

}
