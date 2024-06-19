#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    c = 'A';
    printf("\nResult when uppercase alphabet is passed: %d", isalpha(c)); //1

    c = 'a';
    printf("\nResult when lowercase alphabet is passed: %d", isalpha(c)); //2

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", isalpha(c)); //0

    return 0;
}
