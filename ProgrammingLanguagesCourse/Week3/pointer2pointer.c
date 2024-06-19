#include <stdio.h>
int main()
{
	int a=20; // deger ata
	int *b=&a; // adresi b pointerina ata
	int **c=&b;
	printf("%d %d %d",a,*b,**c);

	return 0;
}
