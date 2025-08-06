#include <stdio.h>

int main() 
{
    int a[10][10], b[10][10], sum[10][10], diff[10][10]; // declaring arrays
    int row, col;
    int i, j;

    // Input matrix dimensions
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &row, &col);

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Calculate sum and difference
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Display sum
    printf("\nSum of matrices:\n");
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Display difference
    printf("\nDifference of matrices:\n");
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}

