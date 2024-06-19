
#include <stdio.h>

main () {
char x;
int a=3,b=5,c;
scanf("%c", &x);
scanf("%d", &a);

switch (x)
{
case 'A':
c=a+b;
printf("Addition :%d",c);
break;
case 'S':
c=a-b;
printf("Substraction :%d",c);
break;
case 'M':
c=a*b;
printf("Multiplication: %d",c);
break;
default : printf("Invalid operand");
}

}
