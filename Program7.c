#include <stdio.h>

int arr[50];  // global array
int n;		 // global variable for size of array

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

// Recursive function to display array in reverse
void reverse(int index) 
{
    if (index < 0)
        return;

    printf("%d ", arr[index]);
    reverse(index - 1);  // Move to the previous element
}

int main() 
{
    read();  // function to read array elements

    printf("Array elements in reverse order: ");
    reverse(n - 1);  // Start from the last element

    return 0;
}

