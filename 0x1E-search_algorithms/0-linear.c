#include "search_algos.h"

/**
  * linear_search - Linear_search algorithm on an array function
  * @array: Array to be search from
  * @size: Array size
  * @value: integer to search for in array
  * Return: Index where value was found
  */

int linear_search(int *array, size_t size, int value)
{
	size_t g;
	
	if (array == NULL)
		return (-1);

	for (g = 0; < size; g++)
	{
		printf("Value checked array[%li] = [%g]\n", g, array[g]);
		if (array[g] == value)
			return (g);
		g++;
	}

	return (-1);
}	
