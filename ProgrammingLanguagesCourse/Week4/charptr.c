// C program to illustrate 
// char const *p
#include<stdio.h>
#include<stdlib.h>
  
int main()
{
    char a ='A', b ='B';
    const char *ptr = &a;
      
    *ptr = b; //illegal statement (assignment of read-only location *ptr)
      
    // ptr can be changed
    printf( "value pointed to by ptr: %d\n", &a);
    printf( "value pointed to by ptr: %d\n", &b);
    printf( "value pointed to by ptr: %d\n", ptr);
    printf( "value pointed to by ptr: %c\n", *ptr);
    //ptr = &b;
    printf( "value pointed to by ptr: %d\n", ptr);
    printf( "value pointed to by ptr: %c\n", *ptr);
}

