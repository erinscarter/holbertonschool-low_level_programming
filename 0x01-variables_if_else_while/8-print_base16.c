#include <stdio.h>
/**
* main - prints base16
*
* Return: Always 0
*/

int main(void)
{
	int base16;
	char c;

	for (base16 = 0; base16 < 10; base16++)
	{
		putchar((base16 % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
