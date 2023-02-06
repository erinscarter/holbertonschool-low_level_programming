#include "main.h"
/**
* swap_int - swaps integers
* @a: an int to swap
* @b: an int to swap
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
