#include<stdio.h>

void matrisYol(int R,int N,int (*ptr)[N]){
	int i=0,j=0;
	printf("Yol:");
	//printf ("%d",*(*(ptr+2)+2));
	while(j<=5 && i<=5){
	
			if(*(*(ptr+i)+j+1)==1){//if(matris[i][j+1]==1)
			printf("1");
			j++;
			}
			if(*(*(ptr+i+1)+j)==1){//else if(matris[i+1][j]==1){
			printf("2");
			i++;
			}
	}
}
int main(){
	
	int R,N;//Satir,Sütun Deðiþkenleri		
	int k=4;//Max Boyut Deðeri
	int i,j;
	printf("Matris Boyutlaririni Giriniz:\n");
	scanf("%d %d",&R,&N);
	int matris[R][N];
	int (*ptr)[N];
	if(R <= k && N <=k){//Max Deðer So4rgulama
	printf("[%d][%d] boyutlarinda matris giriniz:\n",R,N);
	for(i=0;i<R;i++){
		for(j=0;j<N;j++){
			printf("[%d][%d]:",i,j);
			scanf("%d",&matris[i][j]);
		}
	}
	printf("Girilen matris:\n");
	for(i=0;i<R;i++){
		for(j=0;j<N;j++){
			if(j==N-1){//Satýrlarý ayýrarak yazdýrma iþlemi
				printf(" %d\n",matris[i][j]);
			}
			else{
				printf(" %d",matris[i][j]);
			}	
		}
	}
	}
	ptr=matris;
	matrisYol(R,N,ptr);
	return 0;		
}



