#include<stdio.h>
//faktoriyel
int dizi[100]={1,1};
int factorial(int n){
	if (n<=1){
		return 1;
	}
	else {
		int i;
		for(i=2;i<=n;i++){
			if(dizi[i]==0){
				dizi[i]=i*dizi[i-1];
			}
			
		}
		return dizi[n];
	}
}



int main(){
	int n;
	
	for(n=1;n<10;n++){
		printf("%d!=%d\n",n,factorial(n));
	}
	return 0;
}
