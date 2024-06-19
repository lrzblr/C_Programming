// C program to print elements of a 2-D array 
// by scripting a pointer to an array 
#include<stdio.h>
  
int main()
{
  int arr[3][4] = { 
                    {10, 11, 12, 13}, 
                    {20, 21, 22, 23}, 
                    {30, 31, 32, 33} 
                  };
  int (*ptr)[4];
  //int *ptr;
  ptr = arr;
  printf("%p %p %p %p\n", ptr, ptr + 1, ptr + 2,ptr + 3);
  printf("%p %p %p \n", *ptr+1, *(ptr + 1)+1 , *(ptr + 2)+1);
  printf("%p %p %p\n", *ptr, *(ptr + 1), *(ptr + 2));
  
  printf("%d %d %d\n", **ptr, *(*(ptr + 1) + 2), *(*(ptr + 2) + 3));
  printf("%d %d %d\n", ptr[0][0], ptr[1][2], ptr[2][3]);
  printf("%d %d %d\n", arr[0][0], arr[1][2], arr[2][3]);
  return 0;
}
