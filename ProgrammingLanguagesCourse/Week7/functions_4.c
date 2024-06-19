 #include <stdio.h>
  #include <stdlib.h>
 // Please write Find() function that finds the largest two numbers 
 // in a given integer array
 void Find(int *array, int N, int *largest1, int *largest2) ;
 int main()
 {
 	int* array;
 	int i, n, large1, large2;
 	scanf("%d",&n);
 	array=(int*)malloc(n*sizeof(int));
 	for (i=0;i<n;i++)
 		scanf("%d",&array[i]);
 	Find(array,n,&large1,&large2); 
 	
 	printf("%d %d",large1,large2);
 	return 0; 	
 }
 
 
  
  void Find(int *array, int N, int *largest1, int *largest2)
  {
	int temp,i;
	*largest1 = array[0];
	*largest2 = array[1];
	//determine first and second largest elements
	if (*largest1 < *largest2){
		temp = *largest1;
		*largest1 = *largest2;
		*largest2 = temp;
	} 
	//starting from the third one, scan one by one
	for (i = 2; i < N; i++)
	{
		//if array[i] is the largest one
		if (array[i] > *largest1)
		{
			*largest2 = *largest1;	//update second largest
			*largest1 = array[i];	//update largest
		}
		else 
		//if array[i] is between largest1 and largest2
		if (array[i] > *largest2 && array[i] <= *largest1)
		{
			*largest2 = array[i];	//update second largest
		}
	}
}

