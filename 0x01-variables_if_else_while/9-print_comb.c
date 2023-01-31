#include <stdio.h>
/**
* main - prints single digit number combos
*
* Return: Always 0
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
