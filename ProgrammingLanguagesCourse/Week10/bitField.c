// BIT FIELDS
// we can specify size in bits of structure members in order to use memory efficiently
// the allowable data types for a bit field include unsigned and signed int 
// most compiler accept short and char 
// do not use bit fields greater than size of int
// YOU CAN NOT:
// define an array of bit fields
// take the address of a bit field
// have a pointer to a bit field
#include <stdio.h>
// define a structure with bit fields
typedef struct 
{
	//type name:size;
	unsigned int day:5;		//0-31
	unsigned int month:4;	//0-15
	unsigned int year:11;	//0-2047
}DATE;

int main()
{
	int date1,date2,date3,i;
	// you can create an array from DATE type as usual
	DATE array[3];
	for (i=0;i<2;i++)
	{
		printf("give day, month and year\n");
		// since we can not take the address of a bit-field we have to use temporary variables
		// we first store day, month and year in three different variables
		scanf("%d %d %d",&date1,&date2,&date3);
		//then assign the scaned values to the bitfields
		array[i].day=date1;
		array[i].month=date2;
		array[i].year=date3;
	}
	
	//scanf("%d %d %d",&array[0].day,&date2,&date3);    //illegal
	printf("%d",array[0].day+5);
}
