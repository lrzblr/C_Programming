#include <string.h>
#include <stdio.h>
int main()
{
char array[10]="hello";  //initialization
char *ptr="world";		 //string literal
char str[]="imagine";	 //initialization

char *p="a";			//two bytes allocated
char ch='a';			//one byte allocated

//array = "not OK"; 	//not OK. assignment to expression with array type
//array='d';			//not OK. assignment to expression with array type
array[3] = 'A';
printf("%s\n",array); 	//helAo
ptr="hi";
//ptr[1] = 'B';     	//syntax hatas� vermez runtime hatas� alabilirsin
printf("%s\n",ptr);		//hi

char *ptr2;
// *ptr2 = "not OK";	//type mismatch
ptr2="prime";
printf("%s\n",ptr2);  	//prime

//*array="c";  			//illegal
*array='c'; 			 
*(array+1)='m';  		//parantez konmazsa *'in onceligi oldugu i�in syntax hatas� verir
printf("%s\n",array);   //cmlAo

//         0 1 2 3 4 5 6 
// str  -> i m a g i n e
char *i=str+3;
printf("%c\n",*(i-1)); 		//a
printf("%s\n",i-1); 		//agine

/*
//	ptr2 bu sekilde tanimlandigi i�in string literaldir ve memory'de read only bir �ekilde tutulur
//	String literallarda degisiklik yapilmas� c de tan�ml� de�ildir
//	bu y�zden a�a��daki gibi bir karakter degi�ikli�i yapilamaz
//	ptr2[0]='c';   //segmentation fault verir
//	a�a�idaki tan�mlan�rsa de�i�tirilebilir
*/
char ptr3[]="prime"; 
ptr3[0]='c';
printf("%s\n",ptr3);

}
