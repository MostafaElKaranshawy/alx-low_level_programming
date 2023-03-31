#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: param pointer char.
 * @s2: param pointer cahr.
 * Return: 0, -1, 1.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	flag = 0;
	i = 0;
	
	while (s1[i] != '\0' && s2[i] != '\0' && flag == 0)
	{
		if (s1[i] == s2[i])
			 flag = 0;
		else if (s1[i] > s2[i])
			flag = 1;
		else
			flag = -1;
		}
	}

	return (flag);
}
