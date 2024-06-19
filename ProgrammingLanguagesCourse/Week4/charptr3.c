// C program to illustrate 
//const char * const ptr 
#include<stdio.h>
#include<stdlib.h>
  
int main()
{
    char a ='A', b ='B';
    char *const ptr = &a;
      
    printf( "Value pointed to by ptr: %c\n", *ptr);
    printf( "Address ptr is pointing to: %d\n\n", ptr);
  
     //ptr = &b;// illegal statement (assignment of read-only variable ptr)
     
     *ptr = b;// illegal statement (assignment of read-only location *ptr)
  printf( "Value pointed to by ptr: %c\n", *ptr);
    printf( "Address ptr is pointing to: %d\n\n", ptr);
}

