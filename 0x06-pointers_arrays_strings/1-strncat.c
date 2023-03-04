#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i++])
	{
		j++;
	}
	for (i = 0 && i; src[i] && i < n; i++)
	{
		dest[j] = src[i];
	}
	return (dest);
}
