#include<stdio.h>
# define N 1
# define M 3
# define L 3

int main(){

int sayidizi[M][N][L] = {12,11,10,9,8,7,6,5,4,3,2,1};
int i;
int j;
int k;

for(i=0; i<M; i++){
	for(j=0; j<N; j++){
		for(k=0; k<L; k++){
		printf("sayidizi[%d][%d][%d]= %d \n", i,j,k, sayidizi[i][j][k]);	
	}	
}
}

return 0;



}

