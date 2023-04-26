#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci numbers
 * less than 4000000
 * Return: Always 0
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k + j < 4000000)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%d\n", sum);
	return (0);

}

