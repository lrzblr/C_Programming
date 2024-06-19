//ikinci dereceden bir denklemin köklerini bulma

#include <stdio.h>
#include <math.h>

void denklemKokleri(float a, float b, float c, float *kok1, float *kok2){
	
	float det = (b*b) - (4*a*c);
	if (det>=0){
		*kok1 = (-b - sqrt(det))/(2*a);
		*kok2 = (-b + sqrt(det))/(2*a);
	}
}


int main()
{
 	float kok1= 0;
 	float kok2= 0;
 	
 	denklemKokleri(1,6,9, &kok1, &kok2); // x^2+6x+9=0
 
	  printf(" %f %f \n", kok1,kok2);
	  
}
