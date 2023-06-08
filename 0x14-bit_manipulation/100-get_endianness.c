#include "main.h"

/**
 * get_endianness - Checks the damn endianness
 * Return: Reps 0 as big, 1 as small
 */
int get_endianness(void)
{
	unsigned int g = 1;
	char *c = (char *) &g;

	return (*c);
}
