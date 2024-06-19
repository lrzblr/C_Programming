//Array name gives address of first element of array.
#include <stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    // Assigns address of array to ptr
    int* ptr = arr;
    printf("Value of first element is %d", *(ptr+2));
    return 0;
}

