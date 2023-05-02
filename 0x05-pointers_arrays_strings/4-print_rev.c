#include "main.h"
/**
 * print - function that prints in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)

{
	int stri = 0;
	int t;

	while (*s != '\0')
	{
		stri++;
		s++;
	}
	s--;
	for (t = stri; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
