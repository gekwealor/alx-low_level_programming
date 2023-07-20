#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - It generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int g, b;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (g = 0, add = 0; g < len; g++)
		add += argv[1][g];
	p[1] = l[(add ^ 79) & 63];
	for (g = 0, b = 1; g < len; g++)
		b *= argv[1][g];
	p[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], g = 0; g < len; g++)
		if ((char)b <= argv[1][g])
			b = argv[1][g];
	srand(b ^ 14);
	p[3] = l[rand() & 63];
	for (b = 0, g = 0; g < len; g++)
		b += argv[1][g] * argv[1][g];
	p[4] = l[(b ^ 239) & 63];
	for (b = 0, g = 0; (char)g < argv[1][0]; g++)
		b = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
