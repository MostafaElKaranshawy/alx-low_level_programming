include "main.h"

/**
 * _strncpy: copy size n of the src string to dest string.
 * @dest: param pointer to char.
 * @src: param pointer to char.
 * Return: returns a pointer of char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (dest[i] != '/0' && srd[i] != '\0' && i < n)
	{
		dest[i] = src[i];

		i++;
	}
	dest[i] = '/0';
	return (dest);
}
