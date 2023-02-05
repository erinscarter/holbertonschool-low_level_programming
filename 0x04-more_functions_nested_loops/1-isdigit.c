#include "main.h"
#include <stdio.h>

/**
* _isdigit - returns 1if digit, 0 if not
* @c: int given by the function
* Description: uses headers to link a nested loop
*/

int _isdigit(int c)
{
	if (c <= 48 && c <= 97)
		return (1);
	return (0);
}
