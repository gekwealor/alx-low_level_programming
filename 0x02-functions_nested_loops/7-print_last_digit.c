#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: value of the last digit of number
 */

int print_last_digit(int n)

{

	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last+48);
	}
	else
	_putchar(last + 48);
	return (last);
}
