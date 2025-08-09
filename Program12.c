#include <stdio.h>

int stack[5];  // Array to hold stack elements
int top = -1; // Initially, stack is empty
int n = 5;

// Function to add element to stack
void push(int value) 
{
    if (top == n - 1) 
	{
        printf("Stack Overflow! Cannot push\n");
    } 
	else 
	{
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// Function to remove top element from stack
void pop() 
{
    if (top == -1) 
	{
        printf("Stack Underflow! Stack is empty\n");
    } 
	else 
	{
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Function to view the top element
void peek() 
{
    if (top == -1) 
	{
        printf("Stack is empty\n");
    } 
	else 
	{
        printf("Top element: %d\n", stack[top]);
    }
}

// Function to display all elements
void display() 
{
	int i;
    if (top == -1) 
	{
        printf("Stack is empty\n");
    } 
	else 
	{
        printf("Stack elements:\n");
        for (i = top; i >= 0; i--) 
		{
            printf("%d\n", stack[i]);
        }
    }
}

// Main menu-driven program
int main() 
{
    int choice, value;

    while (1) 
	{
        printf("=== Stack Operations ===\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

