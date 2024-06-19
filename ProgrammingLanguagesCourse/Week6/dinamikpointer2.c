#include <stdio.h>
#include <stdlib.h>
 
// M x N matrix
#define M 4
#define N 5
 
// Dynamically Allocate Memory for 2D Array
int main()
{
    // dynamically create array of pointers of size M
    int **A = (int **)malloc(M * sizeof(int *));        // or int* A[M];
    if (A == NULL)
    {
        fprintf(stderr, "Out of memory");
        exit(0);
    }
 int r,c;
    // dynamically allocate memory of size N for each row
    for (r = 0; r < M; r++)
    {
        A[r] = (int *)malloc(N * sizeof(int));
        if (A[r] == NULL)
        {
            fprintf(stderr, "Out of memory");
            exit(0);
        }
    }
 
    // assign values to allocated memory
    for (r = 0; r < M; r++)
        for (c = 0; c < N; c++)
            A[r][c] = rand() % 100;    // or *(A[r] + c) or *(*(A + r) + c)
 
    // print the 2D array
    for (r = 0; r < M; r++)
    {
        for (c = 0; c < N; c++)
            printf("%d ", A[r][c]);    // or *(A[r] + c) or *(*(A + r) + c)
 
        printf("\n");
    }
 
    // deallocate memory
    for (r = 0; r < M; r++)
        free(A[r]);
 
    free(A);
 
    return 0;
}

