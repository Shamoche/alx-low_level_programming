#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @dest: memory area to be filled
 * @value: char value to copy
 * @size: number of times to copy value
 *
 * Return: pointer to the memory area dest
 */
char *_memset(char *dest, char value, unsigned int size)
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        dest[i] = value;
    }

    return dest;
}

/**
 * *_calloc - allocates memory for an array
 * @num_elements: number of elements in the array
 * @element_size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int num_elements, unsigned int element_size)
{
    char *ptr;

    if (num_elements == 0 || element_size == 0)
        return NULL;

    ptr = malloc(element_size * num_elements);

    if (ptr == NULL)
        return NULL;

    _memset(ptr, 0, num_elements * element_size);

    return ptr;
}

