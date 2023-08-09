#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *x, char *y)
{
	char *a;
	int i, j, c, d;

	if (x == NULL)
		s1 = "";
	if (y == NULL)
		y = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; y[j] != '\0'; j++)
		;

	a = malloc((i * sizeof(*x)) + (j * sizeof(*y)) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			a[c] = x[c];
		else
			a[c] = y[d++];
	}

	return (a);
}
