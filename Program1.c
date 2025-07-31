#include <stdio.h>

// Global variable declaration
int globalVar = 10;

// Function showing local variable
void Local()
{
    int localVar = 5; // Local to this function only
    printf("Local variable: %d\n", localVar);
}

// Function showing static variable
void Static() 
{
    static int staticVar = 0; // Keeps its value between function calls
    staticVar++;
    printf("Static variable: %d\n", staticVar);
}

// Function showing register variable
void Register() 
{
    register int i; 
    printf("Register variable: ");
    for (i = 1; i <= 3; i++) 
	{
        printf("%d ", i);
    }
    printf("\n");
}

// Function showing global variable
void Global() 
{
    printf("Global variable: %d\n", globalVar);
    globalVar += 5; // Modify the global variable
}

int main() 
{
    // Local variable function calling
    Local();

    // Global variable function calling
    Global();
    Global(); // It prints updated value

    // Static variable function calling 
    Static();
    Static(); // Value increases every time

    // Register variable function calling
	Register();

    return 0;
}

