# include <stdio.h>
# include <stdlib.h>
int addInt(int, int);
int subInt(int, int);
int wrapper (int (*[])(), int, int);
    
int main()
{
	int sum,sub;
	
	int (*foo_ptr_array[2])();  
	
	foo_ptr_array[0] = addInt;
	foo_ptr_array[1] = subInt;

	printf("res:%d\n", wrapper(foo_ptr_array,19,15));
	return 0;
}

int addInt(int n, int m) {
    return n+m;
}

int subInt(int n, int m) {
    return n-m;
}

int wrapper (int (*foo_array[2])(), int a, int b)
{
	int res;
	if (a<b)
		res=foo_array[0](a,b);
	else
		res=foo_array[1](a,b);
	return res;
}

