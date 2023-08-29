#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @prev_ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory block pointed to by prev_ptr
 * @new_size: new size of the memory block after reallocation
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *prev_ptr, unsigned int old_size, unsigned int new_size)
{
    char *new_block;     // Pointer to the newly allocated memory block
    char *old_block;     // Pointer to the old memory block
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

    new_block = malloc(new_size);
    if (!new_block)
        return (NULL);

    old_block = prev_ptr;

    if (new_size < old_size)
    {
        for (i = 0; i < new_size; i++)
            new_block[i] = old_block[i];
    }

    if (new_size > old_size)
    {
        for (i = 0; i < old_size; i++)
            new_block[i] = old_block[i];
    }

    free(prev_ptr);
    return (new_block);
}

