#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int o;
	int t;

	for (o = 0; o < n--; o++)
	{
		t = a[o];
		a[o] = a[n];
		a[n] = t;
	}
}

