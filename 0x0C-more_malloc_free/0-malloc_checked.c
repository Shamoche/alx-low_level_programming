#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory and check for allocation success
void *malloc_checked(size_t size)
{
    void *ptr = malloc(size);  // Allocate memory of the specified size

    if (ptr == NULL)           // Check if allocation was successful
    {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(98);              // Terminate the process with status 98
    }

    return ptr;                // Return the allocated memory pointer
}
