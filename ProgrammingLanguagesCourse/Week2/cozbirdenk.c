#include<stdio.h>

// m y + b =x  y= (x- b) /m   2y +6 =10

float cozBirinciDenklem(float egim, float sabit, float sonuc){

return (sonuc-sabit)/egim;
}

int main(){
	
printf("%f\n", cozBirinciDenklem(2,6,10));
printf("%f\n", cozBirinciDenklem(2,-6,10));

}

