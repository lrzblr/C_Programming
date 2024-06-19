// calculate the frequencies of the numbers within a given array 
// suppose each element have one digit
#include <stdio.h>
void calculate (int *, int);//you have to give the prototype of the function if the function body comes after main function
int main()
{
	int i,n;
	int array[20];
	printf("give the item number\n");
	scanf("%d",&n);
	printf("give the items\n");
	for (i=0;i<n;i++)
		scanf("%d",&array[i]);
	calculate (array, n);
	
	/*
	static int counter[10];
	calculateV2 (array, n, counter);

	for (i=0;i<10;i++)
		printf("%d:%d\n",i,counter[i]);
	*/
	return 0;
}

void calculate (int * array, int n)
{
	static int counter[10];	//initializes the array with 0s
	int i,item;
	for (i=0;i<n;i++)
	{
		item=array[i];
		counter[item]++;
	}
	
	for (i=0;i<10;i++)
		printf("%d:%d\n",i,counter[i]);
}

void calculateV2 (int * array, int n, int counter[])
{
	int i,item;
	for (i=0;i<n;i++)
	{
		item=array[i];
		counter[item]++;
	}
	
	
}
