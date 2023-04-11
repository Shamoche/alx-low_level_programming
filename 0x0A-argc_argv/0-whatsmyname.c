#include <stdio.h>
/**
 * main - a function for a name of a file
 * @argc: an argument counter for char
 * @argv: an argument value for char
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
