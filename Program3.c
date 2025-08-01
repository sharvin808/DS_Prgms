#include <stdio.h>

void insert(int arr[], int *n, int s)  //function for insertion of an element
{
    if (*n >= s) 
	{
        printf("Array is full!\n");
        return;
    }
    int value;
    printf("Enter value to insert: ");
    scanf("%d", &value);
    arr[*n] = value;
    (*n)++;
    printf("Inserted successfully!\n");
}

void display(int arr[], int n) // function for display of an element
{
	int i;
    if (n == 0) 
	{
        printf("Array is empty!\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void search(int arr[], int n) //function for searching an element
{
    int value, found = 0, i;
    printf("Enter value to search: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) 
	{
        if (arr[i] == value) 
		{
            printf("Found at position %d\n", i);
            found = 1;
        }
    }
    if (found == 0)
        printf("Element not found.\n");
}

void deleteElement(int arr[], int *n) //function for deletion of an element
{
    int pos, i;
    if (*n == 0) 
	{
        printf("Array is empty!\n");
        return;
    }
    printf("Enter position to delete : ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= *n) 
	{
        printf("Invalid position!\n");
        return;
    }
    for (i = pos; i < *n - 1; i++) 
	{
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Element deleted.\n");
}

void sort(int arr[], int n) //function for sorting the array
{
	int i, j,temp = 0;
    for (i = 0; i < n - 1; i++) 
	{
        for (j = i + 1; j < n; j++) 
		{
            if (arr[i] > arr[j]) 
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array sorted in ascending order.\n");
}

int main() 
{
	int arr[50], n=0, choice, s=50;
	do
	{	
		printf("\n--- Menu ---\n");
	    printf("1.Insert\n 2.Display\n 3.Search\n 4.Delete\n 5.Sort\n 6.Exit\n");
	    printf("Enter your choice: ");
	    scanf("%d", &choice);
		switch (choice) 
		{
			case 1:
				insert(arr, &n, s);
				break;
	        case 2:
				display(arr, n);
				break;
	        case 3:
				search(arr, n);
				break;
	        case 4:
				deleteElement(arr, &n);
				break;
	        case 5:
				sort(arr, n);
				break;
	        case 6:
				printf("Exiting...\n");
				break;
	        default:
				printf("Invalid choice!\n");
				break;
        }
    }while(choice!=6);
	return 0;
}

