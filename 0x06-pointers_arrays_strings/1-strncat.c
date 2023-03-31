#include "main.h"

/**
 * _strncat: concatenate two string.
 * @dest: param of the destination string.
 * @src: param of the source string.
 * @n: param of size of src.
 * Return: returns a pointer of destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '/0' && j < n)
	{
		dest[i] = src[j];

		i++;
		j++;
	}

	dest[i] = '/0';
	return (dest);
}
