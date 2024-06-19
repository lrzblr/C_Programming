// C program to print the elements of 3-D
// array using pointer notation
#include<stdio.h>
/*t yazdir(int a,int b,int c,int(*(*ptr))[a][b]){
	int i,j,k;
	for (i = 0; i < 2; i++){
    	for (j = 0; j < 3; j++){
       		for (k = 0; k < 2; k++){
       		printf("%d\t", *(*(*(ptr + i) + j) +k));
       		printf("\n"); 
	   								}
    							}
                      		}
}*/
int main(){
int a=2,b=3,c=2;
int arr[a][b][c] = {
                       {
                         {5, 10},
                         {6, 11},
                         {7, 12},
                       },
                       {
                         {20, 30},
                         {21, 31},
                         {22, 32},
                       }
                     };
int i, j, k,(*(*ptr))[a][b];
  /*
  printf("%d\t", *(*(*(arr + 0) + 2) +1)); // ilk elemanin adresi
  printf("%d\n", **arr );
  printf("%d\n", ***arr ); // ilk eleman degeri*/
ptr=arr;
yazdir(a,b,c,ptr);
return 0;
}
