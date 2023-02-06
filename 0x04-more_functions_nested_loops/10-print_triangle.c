#include "main.h"

/**
* print_triangle - prints a triangle
* @size: an int given by main
*
* Description: uses headers to link and a nested loop to exec
* Return: void. no return
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size - i - 1; j > 0; j--)
			_putchar(' ');
		for (j = i + 1; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
}
