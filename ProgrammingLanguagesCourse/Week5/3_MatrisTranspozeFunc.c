// This program calculates the transpoze of a given matrix
#include <stdio.h>
// TranspozeMat takes two matrices and fills the second one
// Passing matrices to functions is performed by call by reference 
// The addresses of the matrices are sent. Main function and TranspozeMat function access to the same address 
// Changes that maked by TranspozeMat function affect the matrix at main function side.
void TranspozeMat(int mat[][50],int transpozeM[][50],int dim1, int dim2)
{
	int i,j;
	for (i=0;i<dim1;i++)
		for (j=0;j<dim2;j++)
			transpozeM[j][i]=mat[i][j];
}

void TranspozeMatV2(int (*mat)[],int (*transpozeM)[],int dim1, int dim2)
{
	int i,j;
	for (i=0;i<dim1;i++)
		for (j=0;j<dim2;j++)
			*((int *)transpozeM+j*50+i)=*((int *)mat+i*50+j);
}

void PrintMat(int mat[][50], int dim1, int dim2)
{
	int sum=0,i,j;
	for (i=0;i<dim1;i++)
	{
		for (j=0;j<dim2;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
			
}
int main()
{
	//We allocated space for two 50 by 50 matrices
	int mat[50][50],transpozeM[50][50],i,j,n,m;
	//Ask user for the row and column numbers until proper ones are provided 
	do
	{
		printf("Give row and column numbers of the matrix:\n");
		scanf("%d %d",&n,&m);
	}while ((n>50) || (m>50));

	//Ask user for the elements
	printf("Give the elements\n");
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&mat[i][j]);
	//Call the function which calculates the tranpoze
    TranspozeMatV2(mat,transpozeM,n,m);
    //TranspozeMat(mat,transpozeM,n,m);
    PrintMat(mat,m,n);
    //Print the transpoze matrix
	PrintMat(transpozeM,m,n);
	return 0;
		
}



