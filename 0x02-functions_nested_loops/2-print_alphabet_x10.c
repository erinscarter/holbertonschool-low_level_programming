#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times
* Description: prints the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int step;
	char alpha;

	for (step = 0; step <= 9; step++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
