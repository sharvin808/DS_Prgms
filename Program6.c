#include <stdio.h>

int arr[50];  // global array
int n;       // global variable for size of array

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

// Recursive function to display array
void Recursive(int index) 
{
    if (index >= n)
        return;

    printf("%d ", arr[index]);
    Recursive(index + 1);  // Move to the next index
}

int main() 
{
    read();  //  function for read array elements

    printf("Array elements: ");
    Recursive(0);  // Start displaying from index 0

    return 0;
}

