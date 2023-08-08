#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *b;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*b) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		b[c] = str[c];
	b[c] = '\0';

	return (b);
}
