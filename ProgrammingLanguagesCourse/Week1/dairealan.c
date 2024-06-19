
// this program calculates the area of a circle
#include <stdio.h>
int main()
{
const float pi=3.1415;
int c;
float area;
printf("please give the radius\n");
scanf("%d",&c);

area=c*c*pi;
printf("the area of the circle with a radius %d is %f",c,area);
}
