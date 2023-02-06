#include "main.h"
/**
* print_line - prints underscores
* @n: an int given by main
*
* Description: uses header for link and loop to achieve outcome
* Return: void, no return
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
