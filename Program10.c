#include <stdio.h>

int main() 
{
    int matrix[10][10], transpose[10][10];
    int rows, cols;
    int i, j;

    // Read matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Read matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display transpose matrix
    printf("\nTranspose Matrix:\n");
    for (i = 0; i < cols; i++) 
	{
        for (j = 0; j < rows; j++) 
		{
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

