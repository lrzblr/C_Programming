
// C program to reverse an array using recursion 
# include <stdio.h> 
  
/* Function to print reverse of the passed array */
void reverse(int *ar,int i,int n) 
{ 
   if (i<n) 
   { 
       //printf("%d\n", ar[i]); 
       //printf("%d", *(ar+4) ); 
	   reverse(ar,i+2,n);
	   //printf("%d", *(ar+4) );  
       printf("%d ", ar[i]); 
   } 
} 

 
/* Driver program to test above function */
int main() 
{ 
   int a[] = {1,2,3,4,5}; 
   reverse(a,0,5); 
   return 0; 
} 
