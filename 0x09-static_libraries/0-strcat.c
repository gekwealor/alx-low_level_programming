#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)

{
	int g;
	int k;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[g] = src[k];
		g++;
		k++;
	}

	dest[g] = '\0';
	return (dest);
}
