#include "main.h"
#include <stdlib.h>

/**
 * create_array - creats an array of char
 * and initializes it with a specific char
 * @size: size of array
 * @c: input value
 * Return: returns a pointer to an array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
