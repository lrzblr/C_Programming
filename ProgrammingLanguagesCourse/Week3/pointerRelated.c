// usage of pointers
#include <stdio.h>
int main()
{
	char *p_ch;
	char ch1='A',ch2;
	
	printf("adress of p_ch p %p\n",&p_ch); // pointer adresi
	
	printf("adress of p_ch p %x\n",&p_ch); // pointer adresi hexadecimal
	printf("adress of p_ch p %Fp\n",&p_ch); // file pointer
	
	printf("adress of p_ch d %d\n",&p_ch); // pointer adresi decimal
	
	printf("value stored in ch1 %c\n",ch1);
	printf("adress of ch1 %p\n",&ch1);
	p_ch=&ch1;
	ch2 = *p_ch; 
	printf("value of p_ch %p\n", &p_ch);
	printf("dereferenced value of p_ch %c\n",*p_ch);
	printf("value of ch2 %c\n",ch2);
	
	return 0;
}
