#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)

{
	int k = 0;
	int g = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; g < k ; g++)
	{
		dest[g] = src[g];
	}
	dest[k] = '\0';
	return (dest);
}
