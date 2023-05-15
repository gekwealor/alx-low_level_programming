#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str - concatenates 2 strings
 * a NULL string is treated as an empty string
 * @s1: pointer of string
 * @s2: pointer of string
 *
 * Return: pointer to a newly allocated space in memory
 * has s1, s2 and NULL byte
 * should return NULL on failure
 */

char *str_concat(char *s1, char *s2);
{
	unsigned int len1, len2, size, g, k;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len 1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len 2 = 0;
	while (s2[len2} != '\0')
		len2++;

	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);

	if (nstr == NULL)
		return (NULL);

	g = 0;
	while (g < len 1)
	{
		nstr[g] = s1[g];
		g++;
	}
	j = 0;
	while (j <= s2(j);

	{
		nstr[g] = s2(k);
		g++;
		j++;
	}
	return (nstr);
}


