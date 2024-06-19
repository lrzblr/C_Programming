#include<stdio.h>
int matrisAl(void){
	int matris[20][20];
	int M,N,i,j;
	printf("Matris satir ve sutun bilgilerini giriniz:\n");
	scanf("%d %d",&M,&N);
	if(M || N >20){
		return 0;
	}
	printf("Matris Elemanlarini Giriniz: \n");
		for(i=0;i<M;i++){
			for(j=0;j<N;j++){
				scanf("%d",&matris[i][j]);
				if(matris[i][j]!=0 && matris[i][j]!=1){
				printf("Hatalý rakam girdiniz 0 veya 1 ile tekrar deneyin");
				return 0;
			}return 1;	
	    }
    }
    
}
int matrisYazdir(){
	printf("Girilen matris: \n");
	int i,j,M,N;
	int matris[20][20];
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			if(j==N-1){
				printf("\ %d\n",matris[i][j]);
			}
			else{
				printf("\ %d",matris[i][j]);	
			}
			
	    }
    }
    }

void matrisYolu(int matris[20][20]){
	int yol[20];
	int i,j,M,N;
	int index;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			if(matris[i+1][j]==1){
				yol[index]=1;
				index++;
				matrisYolu(matris[i+1][j+1]);
			}
			else if(matris[i][j+1]==1){
				yol[index]=2;
				index++;
				matrisYolu(matris[i+1][j+1]);
			}
		}
}
}


int main(){
	int matris[20][20];
	int M,N;
	int yol[20];
	matrisAl();
	matrisYazdir();
	matrisYolu(matris[20][20]);
	printf(yol[20]);
	
}

	
	
	

