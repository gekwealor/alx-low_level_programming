#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
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
