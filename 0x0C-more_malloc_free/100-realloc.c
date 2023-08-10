#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @prev_ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for prev_ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *prev_ptr, unsigned int old_size, unsigned int new_size)
{
    char *new_ptr;
    char *old_ptr;
    unsigned int i;

    if (new_size == old_size)
        return (prev_ptr);

    if (new_size == 0 && prev_ptr)
    {
        free(prev_ptr);
        return (NULL);
    }

    if (!prev_ptr)
        return (malloc(new_size));

    new_ptr = malloc(new_size);
    if (!new_ptr)
        return (NULL);

    old_ptr = prev_ptr;

    if (new_size < old_size)
    {
        for (i = 0; i < new_size; i++)
            new_ptr[i] = old_ptr[i];
    }

    if (new_size > old_size)
    {
        for (i = 0; i < old_size; i++)
            new_ptr[i] = old_ptr[i];
    }

    free(prev_ptr);
    return (new_ptr);
}

