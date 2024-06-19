#include <stdio.h>
int x=1;
void RecurseInf()  
{
	printf("%d ",x++);
	RecurseInf();
}
void Recurse()
{ 
	static int n=1;
	if (n<=3) 
	{
		printf("%d ",n);
		n++;
		Recurse();
	}
} 

void Recursev2(int n)
{ 
	if (n<=3) 
	{
		printf("%d ",n);
		n++;
		Recursev2(n);
	}
} 
int main( )
{ 
	//RecurseInf();  //stack dolana kadar ..
	//Recurse();
	//printf("\n");
	Recursev2(1);
	//printf("\n");
	
	return 0;
} 
