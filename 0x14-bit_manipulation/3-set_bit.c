#include "main.h"

/**
 * set_bit - That sets a bit at a given index to 1
 * @n: Change pointer of number
 * @index: Set to 1 the index of bit
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
