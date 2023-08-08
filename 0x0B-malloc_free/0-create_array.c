#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ptArray = (char *) malloc(sizeof(char) * size);

	if (ptArray == NULL)
		return (0);

	while (i < size)
	{
		*(ptArray + i) = c;
		i++;
	}

	*(ptArray + i) = '\0';

	return (ptArray);
}
