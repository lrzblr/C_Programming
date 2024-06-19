#include <stdio.h>
int i=15;						//Program Scope
static int j=3;					//File Scope
void funkA (void);
void printfi();
void fixDuration();

int main ()
{
	int k=5, i;					//Block Scope - the value of global i is protected
	for (i=0;i<3;i++)			//This i does not conflict with other i’s.
	{	
		k++;					//k=6
		goto printAgain;
	}

	printAgain:					//Function Scope
	printf("%d %d %d\n",i,j,k); //0 3 6 
	
	funkA();					//10 4 0 - 15		10 4 1 - 15		10 4 2 - 15
	printfi();					//15
	
	fixDuration();				//3
	fixDuration();				//4
}

void funkA ()
{
	int k=10,i;					//Block Scope, Automatic Duration
	for (i=0;i<3;i++)
	{	
		int a=4;				//Block Scope, Automatic Duration			
		printf("funka-k:%d -a:%d  -i:%d\n",k,a,i);
		printfi();
	}
	// illegal //A variable with a block scope can NOT be accessed outside its block.
	/*				
	if (a==4)					
		printf("equal");
	*/
}

void printfi()
{
	printf("i with program scope:%d\n",i);	//the value of global i is protected
}

void fixDuration()
{
	static int fix=2;		//Block Scope, Fix Duration
	fix++;
	printf("fix:%d\n",fix);
}
