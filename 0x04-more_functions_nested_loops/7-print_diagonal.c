#include "main.h"

/**
* print_diagonal - prints diagonal line with a \n
* @n: int given by main
*
* Description: uses headers to link and a nested loop to execute
* Return: void. No return.
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 8)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = n - i; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
