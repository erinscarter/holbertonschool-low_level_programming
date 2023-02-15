#include "main.h"
/**
* factorial - entry point
* @n: an int from input
* Return: 0 if success
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
