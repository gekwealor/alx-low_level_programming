#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 * Return: 1 to uppercase letter 0 for anything else  
 */

int _isupper(int x)
{
        if (x >= 65 && x <= 90)
	{
        return (1);
 	}
        return (0);
}

