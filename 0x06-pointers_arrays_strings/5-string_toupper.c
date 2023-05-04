#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int g;

	g = 0;
	while (n[g] != '\0')
	{
		if (n[g] >= 'a' && n[g] <= 'z')
			n[g] = n[g] - 32;
		g++;
	}
	return (n);
}


