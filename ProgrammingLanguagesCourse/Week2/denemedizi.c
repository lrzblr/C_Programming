#include<stdio.h>
# define N 5


int main(){

int sayidizi[N]= {1,2,3,4};
int sayidizi2[N]= {};

//char karakterDizisi[20];
int i;


for(i=0; i<N; i++){
	
	printf("sayidizi[%d]= %d \n", i, sayidizi[i]);
	printf("sayidizi2[%d]= %d \n", i, sayidizi2[i]);
		
}

return 0;



}

