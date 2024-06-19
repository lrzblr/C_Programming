#include <stdio.h>
int factRecurseInf(int n)
{ 
	printf("processing..");
	return n*factRecurseInf(n-1);
}

int factRecurse(int n)
{ 
	if (n==1) return 1; 
	else 
		return n*factRecurse(n-1);
} 
// 4! = 4 * 6(fact(3))
// 3! = 3 * 2(fact(2))
// 2! = 2 * 1(fact(1))
// t(n)=n*t(n-1)
int main( )
{ 
	//printf ( "%d\n", factRecurse(5) );
	printf ( "%d\n", factRecurseInf(4) );
	return 0;
} 

