#include<stdio.h>//sayý arama
#define N 10

int TamSayiDizi[N]={1,6,9,88,-5,45,-32,99,3,4};
int arama(int a){
	int i;
	for(i=0;i<10;i++){
		if(a== TamSayiDizi[i]){
			return 1;
			
		}
	}
	return 0;
	
}







int main(){
	int n;
	
	for(n=-100;n<100;n++){
		if(arama(n)==1){
			printf("%d dizide vardir\n",n);
		}

	}
	
}

