#include "main.h"

/**
* print_numbers - prints 0 though 9 and new line
* Description: Uses headers to link and a nested loop to achieve outcome
* Return: void, no return
*/

void print_numbers(void)
{
	int i = 0;

	for (i >= 0; i <= 9; i++)
	_putchar(i + '0');
	_putchar('\n');
}
