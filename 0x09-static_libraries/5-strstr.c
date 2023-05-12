#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
		char *g = haystack;
		char *k = needle;


		while (*g == *k && *k != '\0')
		{
			g++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}

	return (0);
}
