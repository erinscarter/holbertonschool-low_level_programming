#include "main.h"

/**
* print_last_digit - entry point
* @n: n is an integer
* Description: prints the last digit of a number
* Returns: Integer
*/

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
