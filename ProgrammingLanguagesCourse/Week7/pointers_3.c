#include <stdio.h>
void fun(int, int*);

int main()
{
							//	0		1		2		3		4
							//	FE00  	FE04  	FE08  	FE0C  	FE10 
	int arr[5] = 			{	1, 		2, 		3, 		4, 		5		};
	int *p,j;
	p=&arr[1];	//p=FE04
	fun(4, p);	
	for(j=0; j<5; j++)
		printf("%d ",arr[j]);//	1 		3 		4 		5 		5
	return 0;
}
void fun(int n, int *ptr)  //n=4 ptr=FE04
{
	int i=0;
	while(i < n-1)		   		//i=0 *(FE04+0*4)=*(FE04+1*4)  *(FE04)=*(FE08)
	{					   		//i=1 *(FE04+1*4)=*(FE04+2*4)  *(FE08)=*(FE0C)
		*(ptr+i) = *(ptr+i+1);	//i=2 *(FE04+2*4)=*(FE04+3*4)  *(FE0C)=*(FE10)
		i++;
	}
}
