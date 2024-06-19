// UNIONS & INITIALIZING UNIONS
#include <stdio.h>
union doub
{
	unsigned char c[2]; //2
	unsigned short  int val;   //2
};

int main()
{
	int j;
	union doub d;
	// int ii:4;    böyle bir bit field olmaz
	for (j=0;j<2;j++)
		scanf("%d",&d.c[j]);	// 1,1 verirsek  00000001 00000001
	
	printf("val1:%d\n",d.val);	//	257 goruruz

	return 0;
}
