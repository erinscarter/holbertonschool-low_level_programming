#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: ALways 0 (success)
*/
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low ++)
		putchar(low);
		printf("\n");

	return (0);
}
