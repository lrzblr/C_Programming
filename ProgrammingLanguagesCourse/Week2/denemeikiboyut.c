#include<stdio.h>
# define N 3
# define M 4

int main(){

int sayidizi[M][N]= { {1,2,3}, {4,5,6}, {7}, 8,9,10};
int i;
int j;

for(i=0; i<M; i++){
	for(j=0; j<N; j++){
		printf("sayidizi[%d][%d]= %d \n", i,j, sayidizi[i][j]);	
	}
	
	
}

return 0;



}

