#include<stdio.h>
void yerDegistir(int *ilkdeger, int *sondeger){
	int temp = *ilkdeger;
	*ilkdeger = *sondeger;
	*sondeger = temp;
}
int main(){
	printf("POINTER FONKSIYON ORNEGI\n\n");
	
	int x = 15;
	int y = 32;
	
	printf("x degiskeninin degeri: %d\n",x);
	printf("y degiskeninin degeri: %d\n",y);
	
	yerDegistir(&x,&y);
	yerDegistir(&a,&b);
	
	printf("x degiskeninin degeri: %d\n",x);
	printf("y degiskeninin degeri: %d\n",y);
	
	return 0;
}
