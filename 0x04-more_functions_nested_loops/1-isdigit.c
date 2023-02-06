#include "main.h"
#include <stdio.h>

/**
* _isdigit - entry point
* @c: int given by the function
*
* Description: uses headers to link a nested loop
* Return: 1 if digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 97)
		return (1);
	return (0);
}
