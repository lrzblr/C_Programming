#include <stdio.h>
int main()
{								//	0 1 2 3 4
	char array1[10]="year"; 	// 	y e a r \0  
	*(array1+2)='m'; 			//	y e m r \0
	printf("%s\n",array1);
								//	0 1 2 3 4 5 6
	char array2[]="mounth";		//	m o u n t h \0
	char *new=array2+3;			//	n t h \0
	printf("%c\n",*new); 		//	n
	printf("%s\n",new); 		//	nth
								
								//  0 1 2 3
	char array3[]="day";		//	d a y \0
	*array3='c'; 				//  c a y \0
	printf("%s\n",array3);
	printf("%d\n",sizeof(array3)); // 4		
	
	return 0;
}

