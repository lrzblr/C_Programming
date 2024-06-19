
// C program to reverse a string using recursion 
# include <stdio.h> 
  
/* Function to print reverse of the passed array */
void reverse(int *ar,int i,int n) 
{ 
   int temp;
   if (i<n) 
   { 
       temp=ar[i];
       ar[i]=ar[n];
       ar[n]=temp;
	   reverse(ar,i+1,n-1); 
    } 
} 
  
/* Driver program to test above function */
int main() 
{ 
   int a[] = {1,2,3,4,5}; 
   int i;
   for (i=0;i<5;i++)
       printf("%d", a[i]); 
   reverse(a,0,4); 
   for (i=0;i<5;i++)
       printf("%d", a[i]); 
   return 0; 
} 
