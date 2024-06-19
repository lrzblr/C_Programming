
#include <stdio.h>
/*
void main()
{
   char str[20];
   gets(str);
   printf("%s", str);
   return;
}*/

#define MAX_LIMIT 20
void main()
{
   char str[MAX_LIMIT];
   fgets(str, MAX_LIMIT, stdin);
   printf("%s", str);
 
   getchar();
   return;
}

