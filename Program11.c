#include <stdio.h>

int main() 
{
    int choice, i, j, det;
    printf("Find Determinant of:\n");
    printf("1. 2x2 Matrix\n");
    printf("2. 3x3 Matrix\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) 
	{
        int a[2][2];
        printf("\nEnter elements of 2x2 matrix:\n");
        for (i = 0; i < 2; i++) 
		{
            for (j = 0; j < 2; j++) 
			{
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
        printf("Determinant of 2x2 matrix = %d\n", det);

    } 
	else if (choice == 2) 
	{
        int a[3][3];
        printf("\nEnter elements of 3x3 matrix:\n");
        for (i = 0; i < 3; i++) 
		{
            for (j = 0; j < 3; j++) 
			{
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
                - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
                + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);

        printf("Determinant of 3x3 matrix = %d\n", det);

    } 
	else 
	{
        printf("Invalid choice!\n");
    }

    return 0;
}

