#include <stdio.h>
int main()
{
	int i=3, m=2.5, n=-5;
	float x=0.5, y=6,z;
	char  a='1', b='5', c=2, d, e='a';
	printf("%c\n",e+1);
	printf("%d\n",e+1);			
	printf("%c\n",b-c);	//		'5'-2				->	'3'
	printf("%d\n",b-a);	//		'5'-'1'				->	4
	z=i/y+2.5;			//		3/6=0.5		0.5+2.5	->	3
	printf("%f\n",z);	
	z=n+m/x;			//		m=2		m/x=2/0.5=4		-5+4	->	-1
	printf("%f\n",z);
	printf("%d\n",(i++)-(--n));	//	3-(-6)			->9
	
	
	return 0;
}

