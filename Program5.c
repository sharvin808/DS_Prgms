#include <stdio.h>

int arr[50]; // global array
int n;      // global variable for size of array

// Function to read array elements
void read() 
{
	int i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
}

// Function to display array
void disp() 
{
	int i;
    printf("Array elements: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to sort array in ascending order
void sort() 
{
	int i,j,temp;
    for (i = 0; i < n - 1; i++) 
	{
        for (j = i + 1; j < n; j++) 
		{
            if (arr[i] > arr[j]) 
			{
                // Swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() 
{
    read();       // Read array
    printf("\nOriginal ");
    disp();       // Display original array

    sort();       // Sort array

    printf("Sorted ");
    disp();       // Display sorted array

    return 0;
}

