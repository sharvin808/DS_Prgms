#include <stdio.h>

int main() 
{
    int arr[50], n, key, found = 0,i;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Input elements to the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Search and print all positions
    printf("Element %d found at position: ", key);
    for (i = 0; i < n; i++) 
	{
        if (arr[i] == key) 
		{
            printf("%d ", i);  // printing index position
            found = 1;
        }
    }

    if (found == 0) // searched element not in the array
        printf("Element not found.");
    return 0;
}

