// write a function that takes an array and returns minimum item and its index
// 2 3 1 7 3
// minimum item:1 index:2	
// if two or more items have same value, returning one of them is ok
#include <stdio.h>
int findMin(int*, int, int*);
int main()
{
	int n,i,index,min;
	//printf("%d\n",min);
	//int* ptr;
	int array[20];
	printf("give the number of the elements\n");
	scanf("%d",&n);
	printf("give the elements\n");
	for (i=0;i<n;i++)
		scanf("%d",&array[i]);
	index=findMin(&array[0],n,&min);
	printf("minimum item:%d index:%d\n",min,index);
	return 0;
}
//int findMin(int array[], int n, int* min)
int findMin(int *array, int n, int* min)
{
	int index,i;
	*min=array[0];
	//printf("%d\n",min);
	//printf("%d\n",*min);
	index=0;
	for (i=1;i<n;i++)
		if ( array[i] < (*min) )
		{
			*min=array[i]; //*(array+i)
			index=i;	
		}
	return index;	
}
